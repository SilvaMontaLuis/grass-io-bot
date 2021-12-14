#include "listacliente.h"
#ifndef LISTARCLIENTES_H
#define LISTARCLIENTES_H

#include <QDialog>

namespace Ui {
class listarClientes;
}

class listarClientes : public QDialog
{
    Q_OBJECT

public:
    explicit listarClientes(QWidget *parent = 0);
    ~listarClientes();

    listaCliente *getLCli() const;
    void setLCli(listaCliente *value);
    void mostrarLista(listaCliente *lista);
    //void mostrarBusqueda(classCliente cli);
    void buscarCliente(listaCliente *lista);
    void limpiarLista();

private slots:
    void on_cmdCerrar_clicked();

    void on_cmdBuscarCli_clicked();

    void on_cmdActualizar_clicked();

private:
    Ui::listarClientes *ui;
    listaCliente *lCli;
};

#endif // LISTARCLIENTES_H
