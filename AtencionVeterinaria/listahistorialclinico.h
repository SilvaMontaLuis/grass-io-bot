#ifndef LISTAHISTORIALCLINICO_H
#define LISTAHISTORIALCLINICO_H

#include <QDialog>

namespace Ui {
class listaHistorialClinico;
}

class listaHistorialClinico : public QDialog
{
    Q_OBJECT

public:
    explicit listaHistorialClinico(QWidget *parent = 0);
    ~listaHistorialClinico();

private slots:
    void on_cmdCerrar_clicked();

private:
    Ui::listaHistorialClinico *ui;
};

#endif // LISTAHISTORIALCLINICO_H
