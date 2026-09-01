//instronGPIB.cpp
#include "InstronGPIB.h"
#include <cstring>

// ============================================================
//  Constructor / Destructor
// ============================================================
InstronGPIB::InstronGPIB(QObject *parent) : QObject(parent)
{
    m_timer = new QTimer(this);
    m_timer->setInterval(1000 / FREQ_HZ);   // 50 ms para 20 Hz
    connect(m_timer, &QTimer::timeout, this, &InstronGPIB::onTimer);
}

InstronGPIB::~InstronGPIB()
{
    desconectar();
}

// ============================================================
//  Carga de DLL
// ============================================================
bool InstronGPIB::cargarDLL()
{
    hDLL = LoadLibraryA("gpib488.dll");
    if (!hDLL) {
        emit error(QString("No se pudo cargar gpib488.dll. Codigo: %1").arg(GetLastError()));
        return false;
    }

    struct { const char* n; void** p; } fns[] = {
                {"ibdev",    (void**)&p_ibdev},
                {"ibwrt",    (void**)&p_ibwrt},
                {"ibrd",     (void**)&p_ibrd},
                {"ibclr",    (void**)&p_ibclr},
                {"ibrsp",    (void**)&p_ibrsp},
                {"ibonl",    (void**)&p_ibonl},
                {"ibconfig", (void**)&p_ibconfig},
                {"Ibsta",    (void**)&p_Ibsta},
                {"Iberr",    (void**)&p_Iberr},
                {"Ibcnt",    (void**)&p_Ibcnt},
                };

    for (auto &f : fns) {
        *f.p = (void*)GetProcAddress(hDLL, f.n);
        if (!*f.p) {
            emit error(QString("Funcion no encontrada en la DLL: %1").arg(f.n));
            return false;
        }
    }
    emit log("gpib488.dll cargada correctamente.");
    return true;
}

// ============================================================
//  Comunicacion basica
// ============================================================
bool InstronGPIB::writeCommand(const QString &cmd)
{
    QByteArray bytes = cmd.toLatin1();
    p_ibwrt(m_device, bytes.constData(), bytes.size());
    if (p_Ibcnt() != (unsigned long)bytes.size() || p_Ibsta() & ERR_BIT) {
        emit error(QString("Fallo al enviar \"%1\" (ibsta=0x%2, iberr=%3)")
                       .arg(cmd)
                       .arg(p_Ibsta(), 0, 16)
                       .arg(p_Iberr()));
        return false;
    }
    return true;
}

bool InstronGPIB::readValue(char *buffer, size_t bufsize)
{
    p_ibrd(m_device, buffer, bufsize);

    unsigned long count = p_Ibcnt();

    if (count == bufsize ||
        count == 0 ||
        (p_Ibsta() & ERR_BIT))
    {
        return false;
    }

    buffer[count - 1] = '\0';

    return true;
}

bool InstronGPIB::leerDouble(const QString &cmd, double &valor)
{
    char buf[BUF_SIZE + 1] = {};

    if (!writeCommand(cmd))
        return false;

    if (!readValue(buf, BUF_SIZE))
        return false;

    bool ok = false;

    double resultado =
        QString(buf).trimmed().toDouble(&ok);

    if (!ok)
        return false;

    valor = resultado;

    return true;
}


QString InstronGPIB::leerString(const QString &cmd)
{
    char buf[BUF_SIZE + 1] = {};
    if (!writeCommand(cmd) || !readValue(buf, BUF_SIZE))
        return "---";
    return QString(buf).trimmed();
}

// ============================================================
//  Conexion
// ============================================================
bool InstronGPIB::conectar()
{
    if (estaConectado()) {
        emit log("Ya hay una conexion activa.");
        return true;
    }

    if (!cargarDLL())
        return false;

    m_device = p_ibdev(BOARD_NUM, PAD, SAD, T3s, 1, 0);
    if (m_device < 0) {
        emit error(QString("ibdev() fallo. iberr=%1").arg(p_Iberr()));
        return false;
    }

    p_ibclr(m_device);
    char spr = 0;
    p_ibrsp(m_device, &spr);
    p_ibconfig(m_device, IbcTMO, T3s);

    // Verificacion IEEE488
    char buf[BUF_SIZE + 1] = {};
    if (!writeCommand("R68") || !readValue(buf, BUF_SIZE)) {
        emit error("La Instron no responde.");
        p_ibonl(m_device, 0);
        m_device = -1;
        return false;
    }
    if (strcmp(buf, "0") == 0) {
        emit error("Compruebe que la consola Instron este encendida y su interface IEEE488 habilitada.");
        p_ibonl(m_device, 0);
        m_device = -1;
        return false;
    }

    emit log("Instron conectada correctamente.");
    emit conexionCambiada(true);

    // Primera lectura de celda y extensometro (datos lentos)
    m_celda        = leerString("C2");
    m_extensometro = leerString("C7");

    // Arrancar adquisicion automaticamente al conectar
    iniciarAdquisicion();

    return true;
}

void InstronGPIB::desconectar()
{
    detenerAdquisicion();
    if (estaConectado()) {
        writeCommand("K0");   // paro de seguridad
        p_ibonl(m_device, 0);
        m_device = -1;
        emit conexionCambiada(false);
        emit log("Conexion cerrada.");
    }
    if (hDLL) {
        FreeLibrary(hDLL);
        hDLL = nullptr;
    }
}

// ============================================================
//  Adquisicion continua
// ============================================================
void InstronGPIB::iniciarAdquisicion()
{
    if (!estaConectado())
        return;

    m_muestrasValidas = 0;
    m_erroresAdquisicion = 0;

    m_inicioAdquisicion =
        QDateTime::currentMSecsSinceEpoch();

    m_ultimaLecturaLenta =
        m_inicioAdquisicion;

    m_ultimaEstadistica = m_inicioAdquisicion;

    m_timer->start();

    emit log("Adquisicion iniciada (20 Hz).");
}

void InstronGPIB::detenerAdquisicion()
{
    m_timer->stop();
}

bool InstronGPIB::adquirirMuestra()
{
    DatosInstron datos;

    datos.timestampMs =
        QDateTime::currentMSecsSinceEpoch();

    if (!leerDouble("R2", datos.carga))
    {
        m_erroresAdquisicion++;
        return false;
    }

    if (!leerDouble("R27", datos.velocidad))
    {
        m_erroresAdquisicion++;
        return false;
    }

    if (!leerDouble("R3", datos.extension))
    {
        m_erroresAdquisicion++;
        return false;
    }

    if (!leerDouble("R4", datos.deformacion))
    {
        m_erroresAdquisicion++;
        return false;
    }

    datos.celda = m_celda;
    datos.extensometro = m_extensometro;

    datos.valido = true;

    m_muestrasValidas++;

    emit datosActualizados(datos);

    return true;
}



void InstronGPIB::onTimer()
{
    // Adquisición de valores rápidos
    adquirirMuestra();

    // Actualización de valores lentos cada 2 segundos
    qint64 ahora =
        QDateTime::currentMSecsSinceEpoch();

    if (ahora - m_ultimaLecturaLenta >= INTERVALO_SLOW_MS)
    {
        m_ultimaLecturaLenta = ahora;

        m_celda = leerString("C2");
        m_extensometro = leerString("C7");
    }

    // Estadísticas cada 5 segundos
    if (ahora - m_ultimaEstadistica >= 5000)
    {
        m_ultimaEstadistica = ahora;

        actualizarEstadisticas();
    }
}

void InstronGPIB::actualizarEstadisticas()
{
    if (m_inicioAdquisicion == 0)
        return;

    qint64 ahora =
        QDateTime::currentMSecsSinceEpoch();

    qint64 tiempoMs =
        ahora - m_inicioAdquisicion;

    if (tiempoMs <= 0)
        return;

    double segundos =
        tiempoMs / 1000.0;

    double frecuencia =
        m_muestrasValidas / segundos;

    emit log(
        QString("Adquisicion: %1 muestras | "
                "Errores: %2 | "
                "Tiempo: %3 s | "
                "Frecuencia real: %4 Hz")
            .arg(m_muestrasValidas)
            .arg(m_erroresAdquisicion)
            .arg(segundos, 0, 'f', 1)
            .arg(frecuencia, 0, 'f', 2)
        );
}

// ============================================================
//  Movimiento
// ============================================================
void InstronGPIB::subir()
{
    if (!estaConectado()) { emit error("No hay conexion con la Instron."); return; }
    if (writeCommand("K3"))
        emit log("Traversa subiendo.");
}

void InstronGPIB::bajar()
{
    if (!estaConectado()) { emit error("No hay conexion con la Instron."); return; }
    if (writeCommand("K2"))
        emit log("Traversa bajando.");
}

void InstronGPIB::parar()
{
    if (!estaConectado()) { emit error("No hay conexion con la Instron."); return; }
    if (writeCommand("K0"))
        emit log("Traversa detenida.");
}

void InstronGPIB::balancearCarga()
{
    if (!estaConectado()) { emit error("No hay conexion con la Instron."); return; }
    if (writeCommand("C1")) {
        char buf[BUF_SIZE + 1] = {};
        readValue(buf, BUF_SIZE);
        emit log("Carga balanceada.");
    }
}

void InstronGPIB::resetExtension()
{
    if (!estaConectado()) { emit error("No hay conexion con la Instron."); return; }
    if (writeCommand("K21"))
        emit log("Extension reseteada a 0.");
}

void InstronGPIB::cambiarVelocidad(const QString &valor)
{
    if (!estaConectado()) { emit error("No hay conexion con la Instron."); return; }
    QString cmd = QString("K13,%1").arg(valor);
    if (writeCommand(cmd))
        emit log("Velocidad cambiada a " + valor + " mm/min.");
    else
        emit error("No se pudo configurar la velocidad.");
}

bool InstronGPIB::aplicarParametros(const ParametrosEnsayo &p)
{
    if (!estaConectado())
    {
        emit error("No hay conexion con la Instron.");
        return false;
    }

    // -----------------------------------------
    // Velocidad de traversa
    // -----------------------------------------

    if (!writeCommand(QString("K13,%1")
                          .arg(p.velocidadTraversa)))
    {
        return false;
    }

    // -----------------------------------------
    // Limite máximo de extensión
    // -----------------------------------------

    switch (p.accionMaxExtension)
    {
    case 0:
        if (!writeCommand("K33,0"))
            return false;
        break;

    case 1:
    case 2:
    case 3:
        if (!writeCommand(QString("K26,%1")
                              .arg(p.maxExtension)))
            return false;

        if (!writeCommand(QString("K33,%1")
                              .arg(p.accionMaxExtension)))
            return false;
        break;
    }

    // -----------------------------------------
    // Limite mínimo de extensión
    // -----------------------------------------

    switch (p.accionMinExtension)
    {
    case 0:
        if (!writeCommand("K34,0"))
            return false;
        break;

    case 1:
    case 2:
    case 3:
        if (!writeCommand(QString("K27,%1")
                              .arg(p.minExtension)))
            return false;

        if (!writeCommand(QString("K34,%1")
                              .arg(p.accionMinExtension)))
            return false;
        break;
    }

    // -----------------------------------------
    // Limite máximo de carga
    // -----------------------------------------

    switch (p.accionMaxCarga)
    {
    case 0:
        if (!writeCommand("K31,0"))
            return false;
        break;

    case 1:
    case 2:
    case 3:
        if (!writeCommand(QString("K24,%1")
                              .arg(p.maxCarga)))
            return false;

        if (!writeCommand(QString("K31,%1")
                              .arg(p.accionMaxCarga)))
            return false;
        break;
    }

    // -----------------------------------------
    // Limite mínimo de carga
    // -----------------------------------------

    switch (p.accionMinCarga)
    {
    case 0:
        if (!writeCommand("K32,0"))
            return false;
        break;

    case 1:
    case 2:
    case 3:
        if (!writeCommand(QString("K25,%1")
                              .arg(p.minCarga)))
            return false;

        if (!writeCommand(QString("K32,%1")
                              .arg(p.accionMinCarga)))
            return false;
        break;
    }

    // -----------------------------------------
    // Limite máximo de deformación
    // -----------------------------------------

    switch (p.accionMaxStrain)
    {
    case 0:
        if (!writeCommand("K35,0"))
            return false;
        break;

    case 1:
    case 2:
    case 3:
        if (!writeCommand(QString("K28,%1")
                              .arg(p.maxStrain)))
            return false;

        if (!writeCommand(QString("K35,%1")
                              .arg(p.accionMaxStrain)))
            return false;
        break;
    }

    // -----------------------------------------
    // Limite mínimo de deformación
    // -----------------------------------------

    switch (p.accionMinStrain)
    {
    case 0:
        if (!writeCommand("K36,0"))
            return false;
        break;

    case 1:
    case 2:
    case 3:
        if (!writeCommand(QString("K29,%1")
                              .arg(p.minStrain)))
            return false;

        if (!writeCommand(QString("K36,%1")
                              .arg(p.accionMinStrain)))
            return false;
        break;
    }

    // -----------------------------------------
    // Cantidad de ciclos
    // -----------------------------------------

    if (!writeCommand(QString("K65,%1")
                          .arg(p.cantidadCiclos)))
    {
        return false;
    }

    // -----------------------------------------
    // Acción en rotura
    // -----------------------------------------

    if (!writeCommand(QString("K30,%1")
                          .arg(p.accionRotura)))
    {
        return false;
    }

    emit log("Parametros del ensayo aplicados correctamente.");

    return true;
}