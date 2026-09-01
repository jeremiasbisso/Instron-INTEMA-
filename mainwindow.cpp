//mainwindow.cpp
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "parametros.h"
#include <QIcon>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    showMaximized();


    m_instron = new InstronGPIB(this);

    connect(m_instron, &InstronGPIB::log, this, [this](const QString &msg){
        ui->textConsola->appendPlainText(msg);
    });
    connect(m_instron, &InstronGPIB::error, this, [this](const QString &msg){
        ui->textConsola->appendPlainText("[ERROR] " + msg);
    });
    connect(m_instron, &InstronGPIB::conexionCambiada, this, [this](bool conectado){
        ui->lblEstadoConexion->setText(conectado ? "GPIB: Conectado" : "GPIB: Desconectado");
    });
    connect(m_instron, &InstronGPIB::datosActualizados, this,
            [this](const DatosInstron &datos)
            {
                ui->lblCarga->setText(
                    QString::number(datos.carga, 'f', 3));

                ui->lblVelocidad->setText(
                    QString::number(datos.velocidad, 'f', 2));

                ui->lblExtension->setText(
                    QString::number(datos.extension, 'f', 3));

                ui->lblDeformacion->setText(
                    QString::number(datos.deformacion, 'f', 4));

                ui->lblCelda->setText(datos.celda);

                ui->lblExtensometro->setText(datos.extensometro);
            });

    connect(ui->btnConectar,  &QPushButton::clicked, m_instron, &InstronGPIB::conectar);
    connect(ui->btnSubir,     &QPushButton::clicked, m_instron, &InstronGPIB::subir);
    connect(ui->btnBajar,     &QPushButton::clicked, m_instron, &InstronGPIB::bajar);
    connect(ui->btnParar,     &QPushButton::clicked, m_instron, &InstronGPIB::parar);
    connect(ui->btnBalancear, &QPushButton::clicked, m_instron, &InstronGPIB::balancearCarga);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_btnParametros_clicked()
{
    Parametros *ventana = new Parametros(this);
    ventana->show();

}



