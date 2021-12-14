#ifndef REGISTRARHISTORIALCLINICO_H
#define REGISTRARHISTORIALCLINICO_H

#include <QDialog>

namespace Ui {
class registrarHistorialClinico;
}

class registrarHistorialClinico : public QDialog
{
    Q_OBJECT

public:
    explicit registrarHistorialClinico(QWidget *parent = 0);
    ~registrarHistorialClinico();

private slots:

    void on_cmdCerrar_clicked();

private:
    Ui::registrarHistorialClinico *ui;
};

#endif // REGISTRARHISTORIALCLINICO_H
