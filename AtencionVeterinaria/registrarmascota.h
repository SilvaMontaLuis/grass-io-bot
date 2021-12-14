#ifndef REGISTRARMASCOTA_H
#define REGISTRARMASCOTA_H
#include <listacliente.h>
#include <listamascota.h>
#include <classcliente.h>

#include <QDialog>

namespace Ui {
class registrarMascota;
}

class registrarMascota : public QDialog
{
    Q_OBJECT

public:
    explicit registrarMascota(QWidget *parent = 0);
    ~registrarMascota();


    listaMascota *getLMas() const;
    void setLMas(listaMascota *value);

    listaCliente *getLCli() const;
    void setLCli(listaCliente *value);

    classCliente *getCli() const;
    void setCli(classCliente *value);

private slots:
    void on_cmdCerrar_clicked();

    void on_cmdElegirCli_clicked();

    void on_cmdRegistrar_clicked();

private:
    Ui::registrarMascota *ui;
    listaMascota *lMas;
    listaCliente *lCli;
    classCliente *cli;
};

#endif // REGISTRARMASCOTA_H
