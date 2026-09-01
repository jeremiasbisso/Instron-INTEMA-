#ifndef PARAMETROS_H
#define PARAMETROS_H
#include "parametrosensayo.h"
#include "InstronGPIB.h"
#include <QMainWindow>
#include <QString>

QT_BEGIN_NAMESPACE
namespace Ui {
class Parametros;
}
QT_END_NAMESPACE



class Parametros : public QMainWindow
{
    Q_OBJECT

public:
    explicit Parametros(QWidget *parent = nullptr);
    ~Parametros() override;

private slots:


    void on_imageTipoEnsayo_linkActivated(const QString &link);
    void on_tipoEnsaBox_currentIndexChanged(int index);
    void on_btnAbrirE_clicked();
    void on_btnGuardarE_clicked();
    void on_aplicarBtn_clicked();

private:
    Ui::Parametros *ui;

    ParametrosEnsayo parametros;

    explicit Parametros(InstronGPIB *instron, QWidget *parent = nullptr);

    bool validarParametros();
    void actualizarInterfazTipoEnsayo();

    int mtype = 0;
};
#endif // PARAMETROS_H
