#ifndef LISTARMASCOTAS_H
#define LISTARMASCOTAS_H

#include <QDialog>
#include <listacliente.h>

namespace Ui {
class listarMascotas;
}

class listarMascotas : public QDialog
{
    Q_OBJECT

public:
    explicit listarMascotas(QWidget *parent = 0);
    ~listarMascotas();

    listaCliente *getLCli() const;
    void setLCli(listaCliente *value);

    listaMascota *getLMas() const;
    void setLMas(listaMascota *value);

private slots:
    void on_cmdCerrar_clicked();

    void on_cmdBuscarDoc_clicked();

    void on_cmdActualizar_clicked();

private:
    Ui::listarMascotas *ui;
    listaMascota *lMas;
    listaCliente *lCli;
};

#endif // LISTARMASCOTAS_H
