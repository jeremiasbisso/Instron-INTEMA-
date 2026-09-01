#include "parametros.h"
#include "ui_parametros.h"
#include <QPixmap>
#include <QFileDialog>
#include <QTextStream>
#include <QFile>
#include <QTextStream>
#include <QMessageBox>
#include <QDir>


Parametros::Parametros(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Parametros)
{
    ui->setupUi(this);
    showMaximized();

     actualizarInterfazTipoEnsayo();
}
void Parametros::actualizarInterfazTipoEnsayo()
{
    switch (mtype)
    {
    case 0: // Tracción
        ui->imageTipoEnsayo->setPixmap(
            QPixmap(":/imagenes/Traccion.bmp")
            );
        break;

    case 1: // Compresión
        ui->imageTipoEnsayo->setPixmap(
            QPixmap(":/imagenes/Compresion.bmp")
            );
        break;

    case 2: // Flexión
        ui->imageTipoEnsayo->setPixmap(
            QPixmap(":/imagenes/Flexion.bmp")
            );
        break;
    }
}

bool Parametros::validarParametros()
{
    // -----------------------------
    // Datos generales
    // -----------------------------

    if (ui->tipoEnsaBox->currentIndex() == -1)
    {
        QMessageBox::warning(
            this,
            "Atención",
            "Debe seleccionar un tipo de ensayo."
            );

        ui->tipoEnsaBox->setFocus();
        return false;
    }

    if (ui->nombreEnsayo->text().trimmed().isEmpty())
    {
        QMessageBox::warning(
            this,
            "Atención",
            "Debe ingresar un nombre para el método."
            );

        ui->nombreEnsayo->setFocus();
        return false;
    }

    // -----------------------------
    // Velocidad de traversa
    // -----------------------------

    if (ui->velTraverLine->text().trimmed().isEmpty())
    {
        QMessageBox::warning(
            this,
            "Atención",
            "Debe establecer una velocidad de traversa."
            );

        ui->velTraverLine->setFocus();
        return false;
    }

    // -----------------------------
    // Límites de carga
    // -----------------------------

    if (ui->accCarga_2->currentIndex() != 0 &&
        ui->cargaMax->text().trimmed().isEmpty())
    {
        QMessageBox::warning(
            this,
            "Atención",
            "Debe establecer un límite máximo de carga."
            );

        ui->cargaMax->setFocus();
        return false;
    }

    if (ui->accCarga->currentIndex() != 0 &&
        ui->cargaMin->text().trimmed().isEmpty())
    {
        QMessageBox::warning(
            this,
            "Atención",
            "Debe establecer un límite mínimo de carga."
            );

        ui->cargaMin->setFocus();
        return false;
    }

    // -----------------------------
    // Límites de extensión
    // -----------------------------

    if (ui->accDesp->currentIndex() != 0 &&
        ui->maxDesp->text().trimmed().isEmpty())
    {
        QMessageBox::warning(
            this,
            "Atención",
            "Debe establecer un límite máximo de extensión."
            );

        ui->maxDesp->setFocus();
        return false;
    }

    if (ui->accDesp_2->currentIndex() != 0 &&
        ui->minDesp->text().trimmed().isEmpty())
    {
        QMessageBox::warning(
            this,
            "Atención",
            "Debe establecer un límite mínimo de extensión."
            );

        ui->minDesp->setFocus();
        return false;
    }

    // -----------------------------
    // Límites de deformación
    // -----------------------------

    if (ui->accDef->currentIndex() != 0 &&
        ui->defMax->text().trimmed().isEmpty())
    {
        QMessageBox::warning(
            this,
            "Atención",
            "Debe establecer un límite máximo de deformación."
            );

        ui->defMax->setFocus();
        return false;
    }

    if (ui->accDef_2->currentIndex() != 0 &&
        ui->defMin->text().trimmed().isEmpty())
    {
        QMessageBox::warning(
            this,
            "Atención",
            "Debe establecer un límite mínimo de deformación."
            );

        ui->defMin->setFocus();
        return false;
    }

    return true;
}

Parametros::~Parametros()
{
    delete ui;
}

void Parametros::on_tipoEnsaBox_currentIndexChanged(int index)
{
    mtype = index;

    switch (mtype)
    {
    case 0: // Tracción
        ui->imageTipoEnsayo->setPixmap(
            QPixmap(":/imagenes/Traccion.bmp")
            );
        break;

    case 1: // Compresión
        ui->imageTipoEnsayo->setPixmap(
            QPixmap(":/imagenes/Compresion.bmp")
            );
        break;

    case 2: // Flexión
        ui->imageTipoEnsayo->setPixmap(
            QPixmap(":/imagenes/Flexion.bmp")
            );
        break;
    }
}


void Parametros::on_btnAbrirE_clicked()
{
    QString nombreArchivo = QFileDialog::getOpenFileName(
        this,
        "Abrir ensayo",
        "",
        "Archivo de ensayo (*.ens)"
        );

    if (nombreArchivo.isEmpty())
        return;

    QFile archivo(nombreArchivo);

    if (!archivo.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        QMessageBox::warning(
            this,
            "Error",
            "No se pudo abrir el archivo."
            );
        return;
    }

    QTextStream entrada(&archivo);

    while (!entrada.atEnd())
    {
        QString linea = entrada.readLine();

        if (linea.startsWith("TipoEnsayo="))
        {
            mtype = linea.section('=', 1).toInt();

            ui->tipoEnsaBox->setCurrentIndex(mtype);
        }
    }

    archivo.close();
}


void Parametros::on_btnGuardarE_clicked()
{
    QString nombre = ui->nombreEnsayo->text().trimmed();

    if (nombre.isEmpty())
    {
        QMessageBox::warning(
            this,
            "Error",
            "Escribí un nombre para el ensayo."
            );
        return;
    }

    QString carpeta =
        QCoreApplication::applicationDirPath() + "/Ensayos";

    QDir dir(carpeta);

    if (!dir.exists())
    {
        if (!dir.mkpath("."))
        {
            QMessageBox::critical(
                this,
                "Error",
                "No se pudo crear la carpeta:\n" + carpeta
                );
            return;
        }
    }

    QString ruta = carpeta + "/" + nombre + ".ens";

    QFile archivo(ruta);

    if (!archivo.open(QIODevice::WriteOnly | QIODevice::Text))
    {
        QMessageBox::critical(
            this,
            "Error al guardar",
            "No se pudo abrir el archivo:\n\n" +
                ruta +
                "\n\nError:\n" +
                archivo.errorString()
            );
        return;
    }

    QTextStream salida(&archivo);

    salida << "Nombre=" << nombre << "\n";

    salida << "TipoEnsayo="
           << ui->tipoEnsaBox->currentIndex() << "\n";

    salida << "VelocidadAdquisicion="
           << ui->velAdqBox->currentIndex() << "\n";

    salida << "VelocidadTraversa="
           << ui->velTraverLine->text() << "\n";

    salida << "Direccion="
           << ui->dirAvanBox->currentText() << "\n";

    salida << "AccionMaxCarga="
           << ui->accCarga_2->currentIndex() << "\n";

    salida << "MaxCarga="
           << ui->cargaMax->text() << "\n";

    salida << "AccionMinCarga="
           << ui->accCarga->currentIndex() << "\n";

    salida << "MinCarga="
           << ui->cargaMin->text() << "\n";

    salida << "AccionMaxExtension="
           << ui->accDesp->currentIndex() << "\n";

    salida << "MaxExtension="
           << ui->maxDesp->text() << "\n";

    salida << "AccionMinExtension="
           << ui->accDesp_2->currentIndex() << "\n";

    salida << "MinExtension="
           << ui->minDesp->text() << "\n";

    salida << "AccionMaxStrain="
           << ui->accDef->currentIndex() << "\n";

    salida << "MaxStrain="
           << ui->defMax->text() << "\n";

    salida << "AccionMinStrain="
           << ui->accDef_2->currentIndex() << "\n";

    salida << "MinStrain="
           << ui->defMin->text() << "\n";

    salida << "SwitchToExtension="
           << ui->medirDesplCBox->isChecked() << "\n";

    salida << "AccionRotura="
           << ui->accRotura->currentIndex() << "\n";

    salida << "CantidadCiclos="
           << ui->numCiclos->text() << "\n";

    archivo.close();

    QMessageBox::information(
        this,
        "Guardado",
        "El ensayo se guardó correctamente en:\n\n" + ruta
        );
}


void Parametros::on_aplicarBtn_clicked()
{
    parametros.nombreMetodo =
        ui->nombreEnsayo->text();

    parametros.tipoEnsayo =
        ui->tipoEnsaBox->currentIndex();

    parametros.velocidadAdquisicion =
        ui->velAdqBox->currentIndex();

    parametros.velocidadTraversa =
        ui->velTraverLine->text().toDouble();

    parametros.direccion =
        ui->dirAvanBox->currentText();

    parametros.accionMaxCarga =
        ui->accCarga_2->currentIndex();

    parametros.maxCarga =
        ui->cargaMax->text().toDouble();

    parametros.accionMinCarga =
        ui->accCarga->currentIndex();

    parametros.minCarga =
        ui->cargaMin->text().toDouble();

    parametros.accionMaxExtension =
        ui->accDesp->currentIndex();

    parametros.maxExtension =
        ui->maxDesp->text().toDouble();

    parametros.accionMinExtension =
        ui->accDesp_2->currentIndex();

    parametros.minExtension =
        ui->minDesp->text().toDouble();

    parametros.accionMaxStrain =
        ui->accDef->currentIndex();

    parametros.maxStrain =
        ui->defMax->text().toDouble();

    parametros.accionMinStrain =
        ui->accDef_2->currentIndex();

    parametros.minStrain =
        ui->defMin->text().toDouble();

    parametros.switchToExtension =
        ui->medirDesplCBox->isChecked();

    parametros.accionRotura =
        ui->accRotura->currentIndex();

    parametros.cantidadCiclos =
        ui->numCiclos->text().toInt();


    if (!validarParametros())
        return;

    // Por ahora solamente mostramos que funcionó.
    QMessageBox::information(
        this,
        "Parámetros",
        "Parámetros validados correctamente."
        );


}
void Parametros::on_imageTipoEnsayo_linkActivated(const QString &link)
{
    Q_UNUSED(link);
}

