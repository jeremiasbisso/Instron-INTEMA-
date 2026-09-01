/********************************************************************************
** Form generated from reading UI file 'parametros.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PARAMETROS_H
#define UI_PARAMETROS_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Parametros
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_9;
    QVBoxLayout *verticalLayout_8;
    QGroupBox *controlEnsayo;
    QGridLayout *gridLayout_7;
    QLabel *imageTipoEnsayo;
    QGridLayout *gridLayout;
    QComboBox *tipoEnsaBox;
    QLabel *velTraver;
    QLabel *dirAvan;
    QComboBox *velAdqBox;
    QComboBox *dirAvanBox;
    QLabel *NombreE;
    QPushButton *btnGuardarE;
    QLabel *tipoEnsa;
    QLabel *velAdq;
    QLineEdit *velTraverLine;
    QLabel *velAdqUnit;
    QLabel *velTraverUnit;
    QLineEdit *nombreEnsayo;
    QPushButton *btnAbrirE;
    QGroupBox *limitsEnsayo;
    QVBoxLayout *verticalLayout_10;
    QGridLayout *gridLayout_2;
    QGroupBox *carga;
    QGridLayout *gridLayout_3;
    QComboBox *accCarga_2;
    QComboBox *accCarga;
    QLineEdit *cargaMax;
    QLineEdit *cargaMin;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_5;
    QGroupBox *desplaza;
    QGridLayout *gridLayout_4;
    QLabel *label_13;
    QLineEdit *maxDesp;
    QLabel *label_15;
    QComboBox *accDesp;
    QLabel *label_14;
    QLineEdit *minDesp;
    QLabel *label_16;
    QComboBox *accDesp_2;
    QGroupBox *otros;
    QGridLayout *gridLayout_5;
    QLabel *label_17;
    QLineEdit *numCiclos;
    QLabel *label_18;
    QComboBox *accRotura;
    QGroupBox *defor;
    QGridLayout *gridLayout_6;
    QComboBox *accDef;
    QLabel *label_10;
    QComboBox *accDef_2;
    QLineEdit *defMax;
    QLineEdit *defMin;
    QLabel *label_9;
    QLabel *label_12;
    QLabel *label_11;
    QCheckBox *medirDesplCBox;
    QCheckBox *lvdtCBox;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *aplicarBtn;
    QPushButton *cancelarBtn;

    void setupUi(QMainWindow *Parametros)
    {
        if (Parametros->objectName().isEmpty())
            Parametros->setObjectName("Parametros");
        Parametros->resize(858, 949);
        Parametros->setMinimumSize(QSize(777, 634));
        QIcon icon(QIcon::fromTheme(QIcon::ThemeIcon::DocumentProperties));
        Parametros->setWindowIcon(icon);
        centralwidget = new QWidget(Parametros);
        centralwidget->setObjectName("centralwidget");
        verticalLayout_9 = new QVBoxLayout(centralwidget);
        verticalLayout_9->setObjectName("verticalLayout_9");
        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName("verticalLayout_8");
        verticalLayout_8->setContentsMargins(20, 20, 20, 20);
        controlEnsayo = new QGroupBox(centralwidget);
        controlEnsayo->setObjectName("controlEnsayo");
        controlEnsayo->setMinimumSize(QSize(0, 0));
        controlEnsayo->setMaximumSize(QSize(900, 10000000));
        gridLayout_7 = new QGridLayout(controlEnsayo);
        gridLayout_7->setObjectName("gridLayout_7");
        imageTipoEnsayo = new QLabel(controlEnsayo);
        imageTipoEnsayo->setObjectName("imageTipoEnsayo");
        imageTipoEnsayo->setMinimumSize(QSize(100, 0));
        imageTipoEnsayo->setMaximumSize(QSize(120, 120));
        imageTipoEnsayo->setScaledContents(true);

        gridLayout_7->addWidget(imageTipoEnsayo, 0, 1, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        gridLayout->setHorizontalSpacing(10);
        gridLayout->setVerticalSpacing(6);
        tipoEnsaBox = new QComboBox(controlEnsayo);
        tipoEnsaBox->addItem(QString());
        tipoEnsaBox->addItem(QString());
        tipoEnsaBox->addItem(QString());
        tipoEnsaBox->setObjectName("tipoEnsaBox");
        tipoEnsaBox->setMaximumSize(QSize(100, 16777215));

        gridLayout->addWidget(tipoEnsaBox, 1, 1, 1, 1);

        velTraver = new QLabel(controlEnsayo);
        velTraver->setObjectName("velTraver");
        velTraver->setMinimumSize(QSize(120, 0));
        velTraver->setMaximumSize(QSize(120, 16777215));

        gridLayout->addWidget(velTraver, 3, 0, 1, 1);

        dirAvan = new QLabel(controlEnsayo);
        dirAvan->setObjectName("dirAvan");
        dirAvan->setMinimumSize(QSize(120, 0));
        dirAvan->setMaximumSize(QSize(120, 16777215));

        gridLayout->addWidget(dirAvan, 4, 0, 1, 1);

        velAdqBox = new QComboBox(controlEnsayo);
        velAdqBox->addItem(QString());
        velAdqBox->addItem(QString());
        velAdqBox->addItem(QString());
        velAdqBox->addItem(QString());
        velAdqBox->setObjectName("velAdqBox");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(velAdqBox->sizePolicy().hasHeightForWidth());
        velAdqBox->setSizePolicy(sizePolicy);
        velAdqBox->setMinimumSize(QSize(80, 0));
        velAdqBox->setMaximumSize(QSize(100, 16777215));

        gridLayout->addWidget(velAdqBox, 2, 1, 1, 1);

        dirAvanBox = new QComboBox(controlEnsayo);
        dirAvanBox->addItem(QString());
        dirAvanBox->addItem(QString());
        dirAvanBox->setObjectName("dirAvanBox");
        dirAvanBox->setMaximumSize(QSize(100, 16777215));

        gridLayout->addWidget(dirAvanBox, 4, 1, 1, 1);

        NombreE = new QLabel(controlEnsayo);
        NombreE->setObjectName("NombreE");

        gridLayout->addWidget(NombreE, 0, 0, 1, 1);

        btnGuardarE = new QPushButton(controlEnsayo);
        btnGuardarE->setObjectName("btnGuardarE");
        btnGuardarE->setMaximumSize(QSize(80, 16777215));

        gridLayout->addWidget(btnGuardarE, 0, 4, 1, 1);

        tipoEnsa = new QLabel(controlEnsayo);
        tipoEnsa->setObjectName("tipoEnsa");
        tipoEnsa->setMaximumSize(QSize(120, 16777215));

        gridLayout->addWidget(tipoEnsa, 1, 0, 1, 1);

        velAdq = new QLabel(controlEnsayo);
        velAdq->setObjectName("velAdq");
        velAdq->setMinimumSize(QSize(130, 0));
        velAdq->setMaximumSize(QSize(120, 16777215));

        gridLayout->addWidget(velAdq, 2, 0, 1, 1);

        velTraverLine = new QLineEdit(controlEnsayo);
        velTraverLine->setObjectName("velTraverLine");
        velTraverLine->setMaximumSize(QSize(100, 16777215));

        gridLayout->addWidget(velTraverLine, 3, 1, 1, 1);

        velAdqUnit = new QLabel(controlEnsayo);
        velAdqUnit->setObjectName("velAdqUnit");
        velAdqUnit->setMaximumSize(QSize(100, 16777215));

        gridLayout->addWidget(velAdqUnit, 2, 2, 1, 1);

        velTraverUnit = new QLabel(controlEnsayo);
        velTraverUnit->setObjectName("velTraverUnit");
        velTraverUnit->setMaximumSize(QSize(100, 16777215));

        gridLayout->addWidget(velTraverUnit, 3, 2, 1, 1);

        nombreEnsayo = new QLineEdit(controlEnsayo);
        nombreEnsayo->setObjectName("nombreEnsayo");
        nombreEnsayo->setMaximumSize(QSize(150, 16777215));

        gridLayout->addWidget(nombreEnsayo, 0, 1, 1, 1);

        btnAbrirE = new QPushButton(controlEnsayo);
        btnAbrirE->setObjectName("btnAbrirE");
        btnAbrirE->setMaximumSize(QSize(80, 16777215));

        gridLayout->addWidget(btnAbrirE, 0, 2, 1, 1);


        gridLayout_7->addLayout(gridLayout, 0, 0, 1, 1);


        verticalLayout_8->addWidget(controlEnsayo);

        limitsEnsayo = new QGroupBox(centralwidget);
        limitsEnsayo->setObjectName("limitsEnsayo");
        verticalLayout_10 = new QVBoxLayout(limitsEnsayo);
        verticalLayout_10->setObjectName("verticalLayout_10");
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName("gridLayout_2");
        carga = new QGroupBox(limitsEnsayo);
        carga->setObjectName("carga");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(carga->sizePolicy().hasHeightForWidth());
        carga->setSizePolicy(sizePolicy1);
        carga->setMinimumSize(QSize(300, 130));
        carga->setMaximumSize(QSize(16777215, 16777215));
        gridLayout_3 = new QGridLayout(carga);
        gridLayout_3->setSpacing(2);
        gridLayout_3->setObjectName("gridLayout_3");
        accCarga_2 = new QComboBox(carga);
        accCarga_2->addItem(QString());
        accCarga_2->addItem(QString());
        accCarga_2->addItem(QString());
        accCarga_2->addItem(QString());
        accCarga_2->setObjectName("accCarga_2");
        accCarga_2->setMinimumSize(QSize(120, 0));
        accCarga_2->setMaximumSize(QSize(120, 16777215));

        gridLayout_3->addWidget(accCarga_2, 0, 3, 1, 1);

        accCarga = new QComboBox(carga);
        accCarga->addItem(QString());
        accCarga->addItem(QString());
        accCarga->addItem(QString());
        accCarga->addItem(QString());
        accCarga->setObjectName("accCarga");
        accCarga->setMinimumSize(QSize(120, 0));
        accCarga->setMaximumSize(QSize(120, 16777215));

        gridLayout_3->addWidget(accCarga, 1, 3, 1, 1);

        cargaMax = new QLineEdit(carga);
        cargaMax->setObjectName("cargaMax");
        cargaMax->setMinimumSize(QSize(80, 0));
        cargaMax->setMaximumSize(QSize(120, 16777215));

        gridLayout_3->addWidget(cargaMax, 0, 1, 1, 1);

        cargaMin = new QLineEdit(carga);
        cargaMin->setObjectName("cargaMin");
        cargaMin->setMinimumSize(QSize(80, 0));
        cargaMin->setMaximumSize(QSize(120, 16777215));

        gridLayout_3->addWidget(cargaMin, 1, 1, 1, 1);

        label_6 = new QLabel(carga);
        label_6->setObjectName("label_6");
        label_6->setMinimumSize(QSize(0, 0));
        label_6->setMaximumSize(QSize(100, 16777215));

        gridLayout_3->addWidget(label_6, 1, 0, 1, 1);

        label_7 = new QLabel(carga);
        label_7->setObjectName("label_7");
        label_7->setMinimumSize(QSize(0, 0));
        label_7->setMaximumSize(QSize(100, 16777215));

        gridLayout_3->addWidget(label_7, 0, 2, 1, 1);

        label_8 = new QLabel(carga);
        label_8->setObjectName("label_8");
        label_8->setMinimumSize(QSize(0, 0));
        label_8->setMaximumSize(QSize(100, 16777215));

        gridLayout_3->addWidget(label_8, 1, 2, 1, 1);

        label_5 = new QLabel(carga);
        label_5->setObjectName("label_5");
        label_5->setMinimumSize(QSize(0, 0));
        label_5->setMaximumSize(QSize(100, 16777215));

        gridLayout_3->addWidget(label_5, 0, 0, 1, 1);


        gridLayout_2->addWidget(carga, 0, 0, 1, 1);

        desplaza = new QGroupBox(limitsEnsayo);
        desplaza->setObjectName("desplaza");
        sizePolicy1.setHeightForWidth(desplaza->sizePolicy().hasHeightForWidth());
        desplaza->setSizePolicy(sizePolicy1);
        desplaza->setMinimumSize(QSize(300, 130));
        desplaza->setMaximumSize(QSize(16777215, 16777215));
        gridLayout_4 = new QGridLayout(desplaza);
        gridLayout_4->setSpacing(2);
        gridLayout_4->setObjectName("gridLayout_4");
        label_13 = new QLabel(desplaza);
        label_13->setObjectName("label_13");
        label_13->setMaximumSize(QSize(100, 16777215));

        gridLayout_4->addWidget(label_13, 0, 0, 1, 1);

        maxDesp = new QLineEdit(desplaza);
        maxDesp->setObjectName("maxDesp");
        maxDesp->setMinimumSize(QSize(80, 0));
        maxDesp->setMaximumSize(QSize(120, 16777215));

        gridLayout_4->addWidget(maxDesp, 0, 1, 1, 1);

        label_15 = new QLabel(desplaza);
        label_15->setObjectName("label_15");
        label_15->setMaximumSize(QSize(100, 16777215));

        gridLayout_4->addWidget(label_15, 0, 2, 1, 1);

        accDesp = new QComboBox(desplaza);
        accDesp->addItem(QString());
        accDesp->addItem(QString());
        accDesp->addItem(QString());
        accDesp->addItem(QString());
        accDesp->setObjectName("accDesp");
        accDesp->setMinimumSize(QSize(120, 0));
        accDesp->setMaximumSize(QSize(120, 16777215));

        gridLayout_4->addWidget(accDesp, 0, 3, 1, 1);

        label_14 = new QLabel(desplaza);
        label_14->setObjectName("label_14");
        label_14->setMaximumSize(QSize(100, 16777215));

        gridLayout_4->addWidget(label_14, 1, 0, 1, 1);

        minDesp = new QLineEdit(desplaza);
        minDesp->setObjectName("minDesp");
        minDesp->setMinimumSize(QSize(80, 0));
        minDesp->setMaximumSize(QSize(120, 16777215));

        gridLayout_4->addWidget(minDesp, 1, 1, 1, 1);

        label_16 = new QLabel(desplaza);
        label_16->setObjectName("label_16");
        label_16->setMaximumSize(QSize(100, 16777215));

        gridLayout_4->addWidget(label_16, 1, 2, 1, 1);

        accDesp_2 = new QComboBox(desplaza);
        accDesp_2->addItem(QString());
        accDesp_2->addItem(QString());
        accDesp_2->addItem(QString());
        accDesp_2->addItem(QString());
        accDesp_2->setObjectName("accDesp_2");
        accDesp_2->setMinimumSize(QSize(120, 0));
        accDesp_2->setMaximumSize(QSize(120, 16777215));

        gridLayout_4->addWidget(accDesp_2, 1, 3, 1, 1);


        gridLayout_2->addWidget(desplaza, 0, 1, 1, 1);

        otros = new QGroupBox(limitsEnsayo);
        otros->setObjectName("otros");
        sizePolicy1.setHeightForWidth(otros->sizePolicy().hasHeightForWidth());
        otros->setSizePolicy(sizePolicy1);
        otros->setMinimumSize(QSize(300, 130));
        gridLayout_5 = new QGridLayout(otros);
        gridLayout_5->setSpacing(2);
        gridLayout_5->setObjectName("gridLayout_5");
        label_17 = new QLabel(otros);
        label_17->setObjectName("label_17");
        label_17->setMaximumSize(QSize(100, 16777215));

        gridLayout_5->addWidget(label_17, 0, 0, 1, 1);

        numCiclos = new QLineEdit(otros);
        numCiclos->setObjectName("numCiclos");
        numCiclos->setMinimumSize(QSize(120, 0));
        numCiclos->setMaximumSize(QSize(120, 16777215));

        gridLayout_5->addWidget(numCiclos, 0, 1, 1, 1);

        label_18 = new QLabel(otros);
        label_18->setObjectName("label_18");
        label_18->setMaximumSize(QSize(100, 16777215));

        gridLayout_5->addWidget(label_18, 1, 0, 1, 1);

        accRotura = new QComboBox(otros);
        accRotura->addItem(QString());
        accRotura->addItem(QString());
        accRotura->addItem(QString());
        accRotura->addItem(QString());
        accRotura->setObjectName("accRotura");
        accRotura->setMinimumSize(QSize(120, 0));
        accRotura->setMaximumSize(QSize(120, 16777215));

        gridLayout_5->addWidget(accRotura, 1, 1, 1, 1);


        gridLayout_2->addWidget(otros, 1, 1, 1, 1);

        defor = new QGroupBox(limitsEnsayo);
        defor->setObjectName("defor");
        sizePolicy1.setHeightForWidth(defor->sizePolicy().hasHeightForWidth());
        defor->setSizePolicy(sizePolicy1);
        defor->setMinimumSize(QSize(300, 130));
        gridLayout_6 = new QGridLayout(defor);
        gridLayout_6->setObjectName("gridLayout_6");
        gridLayout_6->setHorizontalSpacing(1);
        gridLayout_6->setVerticalSpacing(2);
        accDef = new QComboBox(defor);
        accDef->addItem(QString());
        accDef->addItem(QString());
        accDef->addItem(QString());
        accDef->addItem(QString());
        accDef->setObjectName("accDef");
        accDef->setMinimumSize(QSize(120, 0));
        accDef->setMaximumSize(QSize(120, 16777215));

        gridLayout_6->addWidget(accDef, 0, 3, 1, 1);

        label_10 = new QLabel(defor);
        label_10->setObjectName("label_10");
        label_10->setMaximumSize(QSize(100, 16777215));

        gridLayout_6->addWidget(label_10, 1, 0, 1, 1);

        accDef_2 = new QComboBox(defor);
        accDef_2->addItem(QString());
        accDef_2->addItem(QString());
        accDef_2->addItem(QString());
        accDef_2->addItem(QString());
        accDef_2->setObjectName("accDef_2");
        accDef_2->setMinimumSize(QSize(120, 0));
        accDef_2->setMaximumSize(QSize(120, 16777215));

        gridLayout_6->addWidget(accDef_2, 1, 3, 1, 1);

        defMax = new QLineEdit(defor);
        defMax->setObjectName("defMax");
        defMax->setMinimumSize(QSize(80, 0));
        defMax->setMaximumSize(QSize(120, 16777215));

        gridLayout_6->addWidget(defMax, 0, 1, 1, 1);

        defMin = new QLineEdit(defor);
        defMin->setObjectName("defMin");
        defMin->setMinimumSize(QSize(80, 0));
        defMin->setMaximumSize(QSize(120, 16777215));

        gridLayout_6->addWidget(defMin, 1, 1, 1, 1);

        label_9 = new QLabel(defor);
        label_9->setObjectName("label_9");
        label_9->setMaximumSize(QSize(100, 16777215));

        gridLayout_6->addWidget(label_9, 0, 0, 1, 1);

        label_12 = new QLabel(defor);
        label_12->setObjectName("label_12");
        label_12->setMaximumSize(QSize(100, 16777215));

        gridLayout_6->addWidget(label_12, 1, 2, 1, 1);

        label_11 = new QLabel(defor);
        label_11->setObjectName("label_11");
        label_11->setMaximumSize(QSize(100, 16777215));

        gridLayout_6->addWidget(label_11, 0, 2, 1, 1);


        gridLayout_2->addWidget(defor, 1, 0, 1, 1);


        verticalLayout_10->addLayout(gridLayout_2);

        medirDesplCBox = new QCheckBox(limitsEnsayo);
        medirDesplCBox->setObjectName("medirDesplCBox");

        verticalLayout_10->addWidget(medirDesplCBox);

        lvdtCBox = new QCheckBox(limitsEnsayo);
        lvdtCBox->setObjectName("lvdtCBox");

        verticalLayout_10->addWidget(lvdtCBox);


        verticalLayout_8->addWidget(limitsEnsayo);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        aplicarBtn = new QPushButton(centralwidget);
        aplicarBtn->setObjectName("aplicarBtn");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(aplicarBtn->sizePolicy().hasHeightForWidth());
        aplicarBtn->setSizePolicy(sizePolicy2);
        aplicarBtn->setMinimumSize(QSize(80, 30));
        aplicarBtn->setMaximumSize(QSize(120, 40));

        horizontalLayout_7->addWidget(aplicarBtn);

        cancelarBtn = new QPushButton(centralwidget);
        cancelarBtn->setObjectName("cancelarBtn");
        sizePolicy2.setHeightForWidth(cancelarBtn->sizePolicy().hasHeightForWidth());
        cancelarBtn->setSizePolicy(sizePolicy2);
        cancelarBtn->setMinimumSize(QSize(80, 30));
        cancelarBtn->setMaximumSize(QSize(120, 40));

        horizontalLayout_7->addWidget(cancelarBtn);


        verticalLayout_8->addLayout(horizontalLayout_7);


        verticalLayout_9->addLayout(verticalLayout_8);

        Parametros->setCentralWidget(centralwidget);

        retranslateUi(Parametros);

        QMetaObject::connectSlotsByName(Parametros);
    } // setupUi

    void retranslateUi(QMainWindow *Parametros)
    {
        Parametros->setWindowTitle(QCoreApplication::translate("Parametros", "Parametros Ensayo", nullptr));
        controlEnsayo->setTitle(QCoreApplication::translate("Parametros", "Control de ensayo", nullptr));
        imageTipoEnsayo->setText(QCoreApplication::translate("Parametros", "TextLabel", nullptr));
        tipoEnsaBox->setItemText(0, QCoreApplication::translate("Parametros", "Tracci\303\263n", nullptr));
        tipoEnsaBox->setItemText(1, QCoreApplication::translate("Parametros", "Compresi\303\263n", nullptr));
        tipoEnsaBox->setItemText(2, QCoreApplication::translate("Parametros", "Flexi\303\263n", nullptr));

        velTraver->setText(QCoreApplication::translate("Parametros", "Velocidad de traversa", nullptr));
        dirAvan->setText(QCoreApplication::translate("Parametros", "Direccion de avance", nullptr));
        velAdqBox->setItemText(0, QCoreApplication::translate("Parametros", "20", nullptr));
        velAdqBox->setItemText(1, QCoreApplication::translate("Parametros", "10", nullptr));
        velAdqBox->setItemText(2, QCoreApplication::translate("Parametros", "5", nullptr));
        velAdqBox->setItemText(3, QCoreApplication::translate("Parametros", "1", nullptr));

        dirAvanBox->setItemText(0, QCoreApplication::translate("Parametros", "Abajo", nullptr));
        dirAvanBox->setItemText(1, QCoreApplication::translate("Parametros", "Arriba", nullptr));

        NombreE->setText(QCoreApplication::translate("Parametros", "Nombre", nullptr));
        btnGuardarE->setText(QCoreApplication::translate("Parametros", "Guardar", nullptr));
        tipoEnsa->setText(QCoreApplication::translate("Parametros", "Tipo", nullptr));
        velAdq->setText(QCoreApplication::translate("Parametros", "Velocidad de adquisicion", nullptr));
        velAdqUnit->setText(QCoreApplication::translate("Parametros", "ptos/seg", nullptr));
        velTraverUnit->setText(QCoreApplication::translate("Parametros", "mm/min", nullptr));
        btnAbrirE->setText(QCoreApplication::translate("Parametros", "Abrir", nullptr));
        limitsEnsayo->setTitle(QCoreApplication::translate("Parametros", "Limites de ensayo", nullptr));
        carga->setTitle(QCoreApplication::translate("Parametros", "Carga", nullptr));
        accCarga_2->setItemText(0, QCoreApplication::translate("Parametros", "Ninguna Acci\303\263n", nullptr));
        accCarga_2->setItemText(1, QCoreApplication::translate("Parametros", "Ciclar", nullptr));
        accCarga_2->setItemText(2, QCoreApplication::translate("Parametros", "Retornar", nullptr));
        accCarga_2->setItemText(3, QCoreApplication::translate("Parametros", "Detener", nullptr));

        accCarga->setItemText(0, QCoreApplication::translate("Parametros", "Ninguna Acci\303\263n", nullptr));
        accCarga->setItemText(1, QCoreApplication::translate("Parametros", "Ciclar", nullptr));
        accCarga->setItemText(2, QCoreApplication::translate("Parametros", "Retornar", nullptr));
        accCarga->setItemText(3, QCoreApplication::translate("Parametros", "Detener", nullptr));

        label_6->setText(QCoreApplication::translate("Parametros", "MIN", nullptr));
        label_7->setText(QCoreApplication::translate("Parametros", "X", nullptr));
        label_8->setText(QCoreApplication::translate("Parametros", "X", nullptr));
        label_5->setText(QCoreApplication::translate("Parametros", "MAX", nullptr));
        desplaza->setTitle(QCoreApplication::translate("Parametros", "Desplazamiento", nullptr));
        label_13->setText(QCoreApplication::translate("Parametros", "MAX", nullptr));
        label_15->setText(QCoreApplication::translate("Parametros", "mm", nullptr));
        accDesp->setItemText(0, QCoreApplication::translate("Parametros", "Ninguna Acci\303\263n", nullptr));
        accDesp->setItemText(1, QCoreApplication::translate("Parametros", "Ciclar", nullptr));
        accDesp->setItemText(2, QCoreApplication::translate("Parametros", "Retornar", nullptr));
        accDesp->setItemText(3, QCoreApplication::translate("Parametros", "Detener", nullptr));

        label_14->setText(QCoreApplication::translate("Parametros", "MIN", nullptr));
        label_16->setText(QCoreApplication::translate("Parametros", "mm", nullptr));
        accDesp_2->setItemText(0, QCoreApplication::translate("Parametros", "Ninguna Acci\303\263n", nullptr));
        accDesp_2->setItemText(1, QCoreApplication::translate("Parametros", "Ciclar", nullptr));
        accDesp_2->setItemText(2, QCoreApplication::translate("Parametros", "Retornar", nullptr));
        accDesp_2->setItemText(3, QCoreApplication::translate("Parametros", "Detener", nullptr));

        otros->setTitle(QCoreApplication::translate("Parametros", "Otros", nullptr));
        label_17->setText(QCoreApplication::translate("Parametros", "Numero de ciclos", nullptr));
        label_18->setText(QCoreApplication::translate("Parametros", "Accion en Rotura", nullptr));
        accRotura->setItemText(0, QCoreApplication::translate("Parametros", "Ninguna Acci\303\263n", nullptr));
        accRotura->setItemText(1, QCoreApplication::translate("Parametros", "Ciclar", nullptr));
        accRotura->setItemText(2, QCoreApplication::translate("Parametros", "Retornar", nullptr));
        accRotura->setItemText(3, QCoreApplication::translate("Parametros", "Detener", nullptr));

        defor->setTitle(QCoreApplication::translate("Parametros", "Deformacion", nullptr));
        accDef->setItemText(0, QCoreApplication::translate("Parametros", "Ninguna Acci\303\263n", nullptr));
        accDef->setItemText(1, QCoreApplication::translate("Parametros", "Ciclar", nullptr));
        accDef->setItemText(2, QCoreApplication::translate("Parametros", "Retornar", nullptr));
        accDef->setItemText(3, QCoreApplication::translate("Parametros", "Detener", nullptr));

        label_10->setText(QCoreApplication::translate("Parametros", "MIN", nullptr));
        accDef_2->setItemText(0, QCoreApplication::translate("Parametros", "Ninguna Acci\303\263n", nullptr));
        accDef_2->setItemText(1, QCoreApplication::translate("Parametros", "Ciclar", nullptr));
        accDef_2->setItemText(2, QCoreApplication::translate("Parametros", "Retornar", nullptr));
        accDef_2->setItemText(3, QCoreApplication::translate("Parametros", "Detener", nullptr));

        label_9->setText(QCoreApplication::translate("Parametros", "MAX", nullptr));
        label_12->setText(QCoreApplication::translate("Parametros", "mm", nullptr));
        label_11->setText(QCoreApplication::translate("Parametros", "mm", nullptr));
        medirDesplCBox->setText(QCoreApplication::translate("Parametros", "Continuar midiendo desplazamiento", nullptr));
        lvdtCBox->setText(QCoreApplication::translate("Parametros", "LVDT", nullptr));
        aplicarBtn->setText(QCoreApplication::translate("Parametros", "Aplicar", nullptr));
        cancelarBtn->setText(QCoreApplication::translate("Parametros", "Cancelar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Parametros: public Ui_Parametros {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PARAMETROS_H
