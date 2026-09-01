//InstronGPIB.h
#pragma once

#include <QObject>
#include <QString>
#include <QTimer>
#include <QDateTime>
#include <windows.h>
#include "parametrosensayo.h"

// ============================================================
//  InstronGPIB
//  Maneja la comunicacion GPIB con la Instron 4467.
//  Incluye motor de adquisicion continua a 20 Hz.
// ============================================================

struct DatosInstron
{
    double carga = 0.0;
    double velocidad = 0.0;
    double extension = 0.0;
    double deformacion = 0.0;

    QString celda = "---";
    QString extensometro = "---";


    qint64 timestampMs = 0;
    bool valido = false;
};

class InstronGPIB : public QObject
{
    Q_OBJECT

public:
    explicit InstronGPIB(QObject *parent = nullptr);
    ~InstronGPIB();

    bool estaConectado() const { return m_device >= 0; }

public slots:
    // --- Conexion ---
    bool conectar();
    void desconectar();

    // --- Adquisicion continua ---
    void iniciarAdquisicion();   // arranca el timer a 20 Hz
    void detenerAdquisicion();   // para el timer

    // --- Movimiento ---
    void subir();
    void bajar();
    void parar();
    void balancearCarga();
    void resetExtension();
    void cambiarVelocidad(const QString &valor);

    // --- Parámetros del ensayo ---
    bool aplicarParametros(const ParametrosEnsayo &parametros);

signals:
    void log(const QString &mensaje);
    void error(const QString &mensaje);
    void conexionCambiada(bool conectado);

    // Se emite cada vez que llegan datos nuevos (20 Hz)
    void datosActualizados(const DatosInstron &datos);

private slots:
    void onTimer();   // slot interno que ejecuta la lectura periodica

private:
    // --- Tipos para carga dinamica de la DLL ---
    typedef int           (__stdcall *pfn_ibdev)    (int, int, int, int, int, int);
    typedef unsigned long (__stdcall *pfn_ibwrt)    (int, const void*, size_t);
    typedef unsigned long (__stdcall *pfn_ibrd)     (int, void*, size_t);
    typedef unsigned long (__stdcall *pfn_ibclr)    (int);
    typedef unsigned long (__stdcall *pfn_ibrsp)    (int, char*);
    typedef unsigned long (__stdcall *pfn_ibonl)    (int, int);
    typedef unsigned long (__stdcall *pfn_ibconfig) (int, int, int);
    typedef unsigned long (__stdcall *pfn_Ibsta)    (void);
    typedef unsigned long (__stdcall *pfn_Iberr)    (void);
    typedef unsigned long (__stdcall *pfn_Ibcnt)    (void);

    pfn_ibdev    p_ibdev    = nullptr;
    pfn_ibwrt    p_ibwrt    = nullptr;
    pfn_ibrd     p_ibrd     = nullptr;
    pfn_ibclr    p_ibclr    = nullptr;
    pfn_ibrsp    p_ibrsp    = nullptr;
    pfn_ibonl    p_ibonl    = nullptr;
    pfn_ibconfig p_ibconfig = nullptr;
    pfn_Ibsta    p_Ibsta    = nullptr;
    pfn_Iberr    p_Iberr    = nullptr;
    pfn_Ibcnt    p_Ibcnt    = nullptr;

    HMODULE hDLL     = nullptr;
    int     m_device = -1;

    QTimer *m_timer  = nullptr;

    // Cache: celda y extensometro se leen solo al conectar y cada 2 segundos
    QString m_celda        = "---";
    QString m_extensometro = "---";
    int     m_ciclosSlow   = 0;

    static const int BOARD_NUM         = 0;
    static const int PAD               = 4;
    static const int SAD               = 0;
    static const int T3s               = 12;
    static const unsigned long ERR_BIT = (1 << 15);
    static const int BUF_SIZE          = 512;
    static const int IbcTMO            = 0x0003;

    static const int FREQ_HZ     = 20;   // Hz de adquisicion
    static const qint64 INTERVALO_SLOW_MS = 2000;
    qint64 m_ultimaLecturaLenta = 0;

    bool    cargarDLL();
    bool    writeCommand(const QString &cmd);
    bool    readValue(char *buffer, size_t bufsize);
    bool leerDouble(const QString &cmd, double &valor);   // lee un numero
    QString leerString(const QString &cmd);   // lee texto
    bool adquirirMuestra();

    qint64 m_inicioAdquisicion = 0;
    qint64 m_muestrasValidas = 0;
    qint64 m_erroresAdquisicion = 0;
    qint64 m_ultimaEstadistica = 0;
    void actualizarEstadisticas();
};