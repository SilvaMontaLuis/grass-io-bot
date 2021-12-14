#ifndef ATENCION_H
#define ATENCION_H
#include <listacliente.h>
#include <listamascota.h>
#include <listaatencion.h>

#include <QDialog>

namespace Ui {
class atencion;
}

class atencion : public QDialog
{
    Q_OBJECT

public:
    explicit atencion(QWidget *parent = 0);
    ~atencion();



    listaMascota *getLMas() const;
    void setLMas(listaMascota *value);

    listaCliente *getLCli() const;
    void setLCli(listaCliente *value);


    listaAtencion *getLAte() const;
    void setLAte(listaAtencion *value);

private slots:
    void on_cmdCerrar_clicked();

    void on_cmdBuscarCli_clicked();

    void on_cmdBuscarMas_clicked();

private:
    Ui::atencion *ui;
    listaAtencion *lAte;
    listaMascota *lMas;
    listaCliente *lCli;
};

#endif // ATENCION_H
