#include <listacliente.h>
#ifndef REGISTRARCLIENTE_H
#define REGISTRARCLIENTE_H

#include <QDialog>

namespace Ui {
class registrarCliente;
}

class registrarCliente : public QDialog
{
    Q_OBJECT

public:
    explicit registrarCliente(QWidget *parent = 0);
    ~registrarCliente();
    listaCliente *getLCli() const;
    void setLCli(listaCliente *value);
    void limpiarControles();

private slots:
    void on_cmdCerrar_clicked();

    void on_cmdRegistrar_clicked();

private:
    Ui::registrarCliente *ui;
    listaCliente *lCli;
};

#endif // REGISTRARCLIENTE_H
