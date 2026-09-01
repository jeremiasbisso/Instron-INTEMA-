/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *BarraSuperior;
    QLabel *lblNombre;
    QVBoxLayout *verticalLayout_8;
    QLabel *lblNombreEnsayo;
    QLabel *lblEnsayo;
    QVBoxLayout *verticalLayout_7;
    QLabel *label_10;
    QLabel *lblTTranscurrido2;
    QVBoxLayout *verticalLayout_9;
    QLabel *label_14;
    QLabel *lblEstado;
    QHBoxLayout *BarraInferior;
    QVBoxLayout *LeftPanel;
    QGroupBox *GroupEstado;
    QGridLayout *gridLayout_3;
    QLabel *label_5;
    QLabel *label_2;
    QLabel *label;
    QLabel *lblCarga;
    QLabel *label_6;
    QLabel *label_4;
    QLabel *label_3;
    QLabel *lblCelda;
    QLabel *lblVelocidad;
    QLabel *lblExtensometro;
    QLabel *lblDeformacion;
    QLabel *lblExtension;
    QGroupBox *GroupConsola;
    QVBoxLayout *verticalLayout;
    QPlainTextEdit *textConsola;
    QHBoxLayout *horizontalLayout;
    QLineEdit *textComando;
    QPushButton *btnEnviarComando;
    QGroupBox *GroupConexion;
    QVBoxLayout *verticalLayout_2;
    QLabel *lblEstadoConexion;
    QPushButton *btnConectar;
    QVBoxLayout *CenterPanel;
    QGroupBox *GroupGraf;
    QGroupBox *GroupGrafConf;
    QGridLayout *gridLayout;
    QRadioButton *rbtnCargaExtension;
    QRadioButton *rbtnCargaTiempo;
    QRadioButton *rbtnExtensionTiempo;
    QRadioButton *rbtnDeformacionTiempo;
    QVBoxLayout *RightPanel;
    QGroupBox *GroupTimer;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_7;
    QLabel *lblTTranscurrido;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *lblTEstimado;
    QGroupBox *GroupControl;
    QVBoxLayout *verticalLayout_4;
    QPushButton *btnSubir;
    QPushButton *btnBajar;
    QPushButton *btnBalancear;
    QPushButton *btnParar;
    QGroupBox *GroupOpciones;
    QVBoxLayout *verticalLayout_5;
    QPushButton *btnParametros;
    QPushButton *btnConfiguracion;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *btnCargar;
    QPushButton *btnGuardar;
    QPushButton *btnSalir;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        MainWindow->setMinimumSize(QSize(800, 600));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(centralwidget->sizePolicy().hasHeightForWidth());
        centralwidget->setSizePolicy(sizePolicy);
        verticalLayout_6 = new QVBoxLayout(centralwidget);
        verticalLayout_6->setObjectName("verticalLayout_6");
        BarraSuperior = new QHBoxLayout();
        BarraSuperior->setObjectName("BarraSuperior");
        lblNombre = new QLabel(centralwidget);
        lblNombre->setObjectName("lblNombre");
        lblNombre->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);
        lblNombre->setMargin(10);

        BarraSuperior->addWidget(lblNombre);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName("verticalLayout_8");
        lblNombreEnsayo = new QLabel(centralwidget);
        lblNombreEnsayo->setObjectName("lblNombreEnsayo");

        verticalLayout_8->addWidget(lblNombreEnsayo);

        lblEnsayo = new QLabel(centralwidget);
        lblEnsayo->setObjectName("lblEnsayo");
        lblEnsayo->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);

        verticalLayout_8->addWidget(lblEnsayo);


        BarraSuperior->addLayout(verticalLayout_8);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName("verticalLayout_7");
        label_10 = new QLabel(centralwidget);
        label_10->setObjectName("label_10");
        label_10->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_7->addWidget(label_10);

        lblTTranscurrido2 = new QLabel(centralwidget);
        lblTTranscurrido2->setObjectName("lblTTranscurrido2");
        lblTTranscurrido2->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_7->addWidget(lblTTranscurrido2);


        BarraSuperior->addLayout(verticalLayout_7);

        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setObjectName("verticalLayout_9");
        label_14 = new QLabel(centralwidget);
        label_14->setObjectName("label_14");
        label_14->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_9->addWidget(label_14);

        lblEstado = new QLabel(centralwidget);
        lblEstado->setObjectName("lblEstado");
        lblEstado->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_9->addWidget(lblEstado);


        BarraSuperior->addLayout(verticalLayout_9);


        verticalLayout_6->addLayout(BarraSuperior);

        BarraInferior = new QHBoxLayout();
        BarraInferior->setObjectName("BarraInferior");
        LeftPanel = new QVBoxLayout();
        LeftPanel->setObjectName("LeftPanel");
        GroupEstado = new QGroupBox(centralwidget);
        GroupEstado->setObjectName("GroupEstado");
        gridLayout_3 = new QGridLayout(GroupEstado);
        gridLayout_3->setObjectName("gridLayout_3");
        label_5 = new QLabel(GroupEstado);
        label_5->setObjectName("label_5");

        gridLayout_3->addWidget(label_5, 4, 0, 1, 1);

        label_2 = new QLabel(GroupEstado);
        label_2->setObjectName("label_2");

        gridLayout_3->addWidget(label_2, 1, 0, 1, 1);

        label = new QLabel(GroupEstado);
        label->setObjectName("label");

        gridLayout_3->addWidget(label, 0, 0, 1, 1);

        lblCarga = new QLabel(GroupEstado);
        lblCarga->setObjectName("lblCarga");

        gridLayout_3->addWidget(lblCarga, 0, 1, 1, 1);

        label_6 = new QLabel(GroupEstado);
        label_6->setObjectName("label_6");

        gridLayout_3->addWidget(label_6, 5, 0, 1, 1);

        label_4 = new QLabel(GroupEstado);
        label_4->setObjectName("label_4");

        gridLayout_3->addWidget(label_4, 3, 0, 1, 1);

        label_3 = new QLabel(GroupEstado);
        label_3->setObjectName("label_3");

        gridLayout_3->addWidget(label_3, 2, 0, 1, 1);

        lblCelda = new QLabel(GroupEstado);
        lblCelda->setObjectName("lblCelda");

        gridLayout_3->addWidget(lblCelda, 4, 1, 1, 1);

        lblVelocidad = new QLabel(GroupEstado);
        lblVelocidad->setObjectName("lblVelocidad");

        gridLayout_3->addWidget(lblVelocidad, 1, 1, 1, 1);

        lblExtensometro = new QLabel(GroupEstado);
        lblExtensometro->setObjectName("lblExtensometro");

        gridLayout_3->addWidget(lblExtensometro, 5, 1, 1, 1);

        lblDeformacion = new QLabel(GroupEstado);
        lblDeformacion->setObjectName("lblDeformacion");

        gridLayout_3->addWidget(lblDeformacion, 3, 1, 1, 1);

        lblExtension = new QLabel(GroupEstado);
        lblExtension->setObjectName("lblExtension");

        gridLayout_3->addWidget(lblExtension, 2, 1, 1, 1);


        LeftPanel->addWidget(GroupEstado);

        GroupConsola = new QGroupBox(centralwidget);
        GroupConsola->setObjectName("GroupConsola");
        verticalLayout = new QVBoxLayout(GroupConsola);
        verticalLayout->setObjectName("verticalLayout");
        textConsola = new QPlainTextEdit(GroupConsola);
        textConsola->setObjectName("textConsola");
        textConsola->setReadOnly(true);

        verticalLayout->addWidget(textConsola);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        textComando = new QLineEdit(GroupConsola);
        textComando->setObjectName("textComando");

        horizontalLayout->addWidget(textComando);

        btnEnviarComando = new QPushButton(GroupConsola);
        btnEnviarComando->setObjectName("btnEnviarComando");

        horizontalLayout->addWidget(btnEnviarComando);

        horizontalLayout->setStretch(0, 4);
        horizontalLayout->setStretch(1, 1);

        verticalLayout->addLayout(horizontalLayout);

        verticalLayout->setStretch(0, 8);
        verticalLayout->setStretch(1, 1);

        LeftPanel->addWidget(GroupConsola);

        GroupConexion = new QGroupBox(centralwidget);
        GroupConexion->setObjectName("GroupConexion");
        verticalLayout_2 = new QVBoxLayout(GroupConexion);
        verticalLayout_2->setObjectName("verticalLayout_2");
        lblEstadoConexion = new QLabel(GroupConexion);
        lblEstadoConexion->setObjectName("lblEstadoConexion");
        lblEstadoConexion->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_2->addWidget(lblEstadoConexion);

        btnConectar = new QPushButton(GroupConexion);
        btnConectar->setObjectName("btnConectar");

        verticalLayout_2->addWidget(btnConectar);


        LeftPanel->addWidget(GroupConexion);

        LeftPanel->setStretch(0, 4);
        LeftPanel->setStretch(1, 6);
        LeftPanel->setStretch(2, 2);

        BarraInferior->addLayout(LeftPanel);

        CenterPanel = new QVBoxLayout();
        CenterPanel->setObjectName("CenterPanel");
        GroupGraf = new QGroupBox(centralwidget);
        GroupGraf->setObjectName("GroupGraf");
        sizePolicy.setHeightForWidth(GroupGraf->sizePolicy().hasHeightForWidth());
        GroupGraf->setSizePolicy(sizePolicy);

        CenterPanel->addWidget(GroupGraf);

        GroupGrafConf = new QGroupBox(centralwidget);
        GroupGrafConf->setObjectName("GroupGrafConf");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(GroupGrafConf->sizePolicy().hasHeightForWidth());
        GroupGrafConf->setSizePolicy(sizePolicy1);
        gridLayout = new QGridLayout(GroupGrafConf);
        gridLayout->setObjectName("gridLayout");
        rbtnCargaExtension = new QRadioButton(GroupGrafConf);
        rbtnCargaExtension->setObjectName("rbtnCargaExtension");

        gridLayout->addWidget(rbtnCargaExtension, 1, 0, 1, 1);

        rbtnCargaTiempo = new QRadioButton(GroupGrafConf);
        rbtnCargaTiempo->setObjectName("rbtnCargaTiempo");
        rbtnCargaTiempo->setChecked(true);

        gridLayout->addWidget(rbtnCargaTiempo, 0, 0, 1, 1);

        rbtnExtensionTiempo = new QRadioButton(GroupGrafConf);
        rbtnExtensionTiempo->setObjectName("rbtnExtensionTiempo");

        gridLayout->addWidget(rbtnExtensionTiempo, 0, 1, 1, 1);

        rbtnDeformacionTiempo = new QRadioButton(GroupGrafConf);
        rbtnDeformacionTiempo->setObjectName("rbtnDeformacionTiempo");

        gridLayout->addWidget(rbtnDeformacionTiempo, 1, 1, 1, 1);


        CenterPanel->addWidget(GroupGrafConf);

        CenterPanel->setStretch(0, 5);
        CenterPanel->setStretch(1, 1);

        BarraInferior->addLayout(CenterPanel);

        RightPanel = new QVBoxLayout();
        RightPanel->setObjectName("RightPanel");
        GroupTimer = new QGroupBox(centralwidget);
        GroupTimer->setObjectName("GroupTimer");
        verticalLayout_3 = new QVBoxLayout(GroupTimer);
        verticalLayout_3->setObjectName("verticalLayout_3");
        label_7 = new QLabel(GroupTimer);
        label_7->setObjectName("label_7");
        label_7->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_3->addWidget(label_7);

        lblTTranscurrido = new QLabel(GroupTimer);
        lblTTranscurrido->setObjectName("lblTTranscurrido");
        lblTTranscurrido->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_3->addWidget(lblTTranscurrido);

        label_8 = new QLabel(GroupTimer);
        label_8->setObjectName("label_8");

        verticalLayout_3->addWidget(label_8);

        label_9 = new QLabel(GroupTimer);
        label_9->setObjectName("label_9");
        label_9->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_3->addWidget(label_9);

        lblTEstimado = new QLabel(GroupTimer);
        lblTEstimado->setObjectName("lblTEstimado");
        lblTEstimado->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_3->addWidget(lblTEstimado);


        RightPanel->addWidget(GroupTimer);

        GroupControl = new QGroupBox(centralwidget);
        GroupControl->setObjectName("GroupControl");
        verticalLayout_4 = new QVBoxLayout(GroupControl);
        verticalLayout_4->setObjectName("verticalLayout_4");
        btnSubir = new QPushButton(GroupControl);
        btnSubir->setObjectName("btnSubir");
        sizePolicy.setHeightForWidth(btnSubir->sizePolicy().hasHeightForWidth());
        btnSubir->setSizePolicy(sizePolicy);

        verticalLayout_4->addWidget(btnSubir);

        btnBajar = new QPushButton(GroupControl);
        btnBajar->setObjectName("btnBajar");
        sizePolicy.setHeightForWidth(btnBajar->sizePolicy().hasHeightForWidth());
        btnBajar->setSizePolicy(sizePolicy);

        verticalLayout_4->addWidget(btnBajar);

        btnBalancear = new QPushButton(GroupControl);
        btnBalancear->setObjectName("btnBalancear");
        sizePolicy1.setHeightForWidth(btnBalancear->sizePolicy().hasHeightForWidth());
        btnBalancear->setSizePolicy(sizePolicy1);

        verticalLayout_4->addWidget(btnBalancear);

        btnParar = new QPushButton(GroupControl);
        btnParar->setObjectName("btnParar");
        sizePolicy.setHeightForWidth(btnParar->sizePolicy().hasHeightForWidth());
        btnParar->setSizePolicy(sizePolicy);

        verticalLayout_4->addWidget(btnParar);


        RightPanel->addWidget(GroupControl);

        GroupOpciones = new QGroupBox(centralwidget);
        GroupOpciones->setObjectName("GroupOpciones");
        verticalLayout_5 = new QVBoxLayout(GroupOpciones);
        verticalLayout_5->setObjectName("verticalLayout_5");
        btnParametros = new QPushButton(GroupOpciones);
        btnParametros->setObjectName("btnParametros");

        verticalLayout_5->addWidget(btnParametros);

        btnConfiguracion = new QPushButton(GroupOpciones);
        btnConfiguracion->setObjectName("btnConfiguracion");

        verticalLayout_5->addWidget(btnConfiguracion);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(1);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        btnCargar = new QPushButton(GroupOpciones);
        btnCargar->setObjectName("btnCargar");

        horizontalLayout_2->addWidget(btnCargar);

        btnGuardar = new QPushButton(GroupOpciones);
        btnGuardar->setObjectName("btnGuardar");

        horizontalLayout_2->addWidget(btnGuardar);


        verticalLayout_5->addLayout(horizontalLayout_2);

        btnSalir = new QPushButton(GroupOpciones);
        btnSalir->setObjectName("btnSalir");

        verticalLayout_5->addWidget(btnSalir);


        RightPanel->addWidget(GroupOpciones);

        RightPanel->setStretch(0, 2);
        RightPanel->setStretch(1, 3);
        RightPanel->setStretch(2, 2);

        BarraInferior->addLayout(RightPanel);

        BarraInferior->setStretch(0, 5);
        BarraInferior->setStretch(1, 12);
        BarraInferior->setStretch(2, 4);

        verticalLayout_6->addLayout(BarraInferior);

        verticalLayout_6->setStretch(0, 1);
        verticalLayout_6->setStretch(1, 10);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        lblNombre->setText(QCoreApplication::translate("MainWindow", "INSTRON 4467", nullptr));
        lblNombreEnsayo->setText(QCoreApplication::translate("MainWindow", "(nombre)", nullptr));
        lblEnsayo->setText(QCoreApplication::translate("MainWindow", "Tipo de Ensayo:", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "Tiempo:", nullptr));
        lblTTranscurrido2->setText(QCoreApplication::translate("MainWindow", "00:00", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "Estado:", nullptr));
        lblEstado->setText(QCoreApplication::translate("MainWindow", "Desconectado", nullptr));
        GroupEstado->setTitle(QCoreApplication::translate("MainWindow", "Estado:", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Celda:", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Velocidad:", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Carga:", nullptr));
        lblCarga->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Extensometro:", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Deformacion:", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Extension:", nullptr));
        lblCelda->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        lblVelocidad->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        lblExtensometro->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        lblDeformacion->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        lblExtension->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        GroupConsola->setTitle(QCoreApplication::translate("MainWindow", "Consola", nullptr));
        textComando->setPlaceholderText(QCoreApplication::translate("MainWindow", "Escribir comando...", nullptr));
        btnEnviarComando->setText(QCoreApplication::translate("MainWindow", "Enviar", nullptr));
        GroupConexion->setTitle(QCoreApplication::translate("MainWindow", "Conexion:", nullptr));
        lblEstadoConexion->setText(QCoreApplication::translate("MainWindow", "GPIB: Desconectado", nullptr));
        btnConectar->setText(QCoreApplication::translate("MainWindow", "Conectar", nullptr));
        GroupGraf->setTitle(QCoreApplication::translate("MainWindow", "Grafico", nullptr));
        GroupGrafConf->setTitle(QCoreApplication::translate("MainWindow", "Configuraciones de grafico:", nullptr));
        rbtnCargaExtension->setText(QCoreApplication::translate("MainWindow", "Carga vs Extension", nullptr));
        rbtnCargaTiempo->setText(QCoreApplication::translate("MainWindow", "Carga vs Tiempo", nullptr));
        rbtnExtensionTiempo->setText(QCoreApplication::translate("MainWindow", "Extension vs Tiempo", nullptr));
        rbtnDeformacionTiempo->setText(QCoreApplication::translate("MainWindow", "Deformacion vs Tiempo", nullptr));
        GroupTimer->setTitle(QCoreApplication::translate("MainWindow", "Tiempo", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Transcurrido:", nullptr));
        lblTTranscurrido->setText(QCoreApplication::translate("MainWindow", "00:00", nullptr));
        label_8->setText(QString());
        label_9->setText(QCoreApplication::translate("MainWindow", "Estimado:", nullptr));
        lblTEstimado->setText(QCoreApplication::translate("MainWindow", "- -:- -", nullptr));
        GroupControl->setTitle(QCoreApplication::translate("MainWindow", "Control", nullptr));
        btnSubir->setText(QCoreApplication::translate("MainWindow", "Subir", nullptr));
        btnBajar->setText(QCoreApplication::translate("MainWindow", "Bajar", nullptr));
        btnBalancear->setText(QCoreApplication::translate("MainWindow", "Balancear Carga", nullptr));
        btnParar->setText(QCoreApplication::translate("MainWindow", "PARAR", nullptr));
        GroupOpciones->setTitle(QCoreApplication::translate("MainWindow", "Opciones:", nullptr));
        btnParametros->setText(QCoreApplication::translate("MainWindow", "Parametros de ensayo", nullptr));
        btnConfiguracion->setText(QCoreApplication::translate("MainWindow", "Configuracion", nullptr));
        btnCargar->setText(QCoreApplication::translate("MainWindow", "Cargar", nullptr));
        btnGuardar->setText(QCoreApplication::translate("MainWindow", "Guardar", nullptr));
        btnSalir->setText(QCoreApplication::translate("MainWindow", "Salir", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
