#include "registrarcliente.h"
#include "ui_registrarcliente.h"
#include "QMessageBox"
#include "classcliente.h"

registrarCliente::registrarCliente(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::registrarCliente)
{
    ui->setupUi(this);
}

registrarCliente::~registrarCliente()
{
    delete ui;
}

void registrarCliente::on_cmdCerrar_clicked()
{
    this->close();
}

void registrarCliente::on_cmdRegistrar_clicked()
{
    QMessageBox msje;
    classCliente *cli = new classCliente();
    if(ui->txtNombres->text().length() == 0){
        msje.setText("Debe Ingresar el Nombre");
        msje.exec();
        return;
    }
    if(ui->txtApellidos->text().length() == 0){
        msje.setText("Debe Ingresar el Apellido");
        msje.exec();
        return;
    }
    if(ui->txtDni->text().length() == 0){
        msje.setText("Debe Ingresar el DNI");
        msje.exec();
        return;
    }
    if(ui->txtRuc->text().length()==0){
        msje.setText("Debe ingresar RUC");
        msje.exec();
        return;
    }
    if(ui->txtDireccion->toPlainText().length() == 0){
        msje.setText("Debe Ingresar la Dirección");
        msje.exec();
        return;
    }
    if(ui->txtTelefono->text().length() == 0){
        msje.setText("Debe Ingresar el Telefono");
        msje.exec();
        return;
    }

    cli->setNombres(ui->txtNombres->text().toStdString());
    cli->setApellidos(ui->txtApellidos->text().toStdString());
    cli->setDni(ui->txtDni->text().toStdString());
    cli->setDireccion(ui->txtDireccion->toPlainText().toStdString());
    cli->setTelefono(ui->txtTelefono->text().toStdString());
    cli->setRuc(ui->txtRuc->text().toStdString());

    this->lCli->insertarCliente(cli);
    msje.setText("Cliente Registrado Correctamente");
    msje.exec();
    limpiarControles();
}

listaCliente *registrarCliente::getLCli() const
{
    return lCli;
}

void registrarCliente::setLCli(listaCliente *value)
{
    lCli = value;
}

void registrarCliente::limpiarControles()
{
    ui->txtNombres->setText("");
    ui->txtApellidos->setText("");
    ui->txtDni->setText("");
    ui->txtRuc->setText("");
    ui->txtDireccion->setText("");
    ui->txtTelefono->setText("");
    ui->txtNombres->setFocus();
}
