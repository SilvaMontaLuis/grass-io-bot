#include "registrarmascota.h"
#include "ui_registrarmascota.h"
#include "QMessageBox"
#include "classmascota.h"

#include "listacliente.h"

registrarMascota::registrarMascota(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::registrarMascota)
{
    ui->setupUi(this);
}

registrarMascota::~registrarMascota()
{
    delete ui;
}

void registrarMascota::on_cmdCerrar_clicked()
{
    this->close();
}

void registrarMascota::on_cmdRegistrar_clicked()
{
            QMessageBox msje;
            classMascota *mas = new classMascota();
            if(ui->txtNombreMas->text().length() == 0){
                    msje.setText("Debe Ingresar el Nonbre");
                    msje.exec();
                    return;
                }
            if(ui->txtEspecieMas->text().length() == 0){
                    msje.setText("Debe Ingresar la Especie");
                    msje.exec();
                    return;
                }
            if(ui->txtRazaMas->text().length() == 0){
                    msje.setText("Debe Ingresar la Raza");
                    msje.exec();
                    return;
                }

            mas->setNombre(ui->txtNombreMas->text().toStdString());
            mas->setPeso(ui->dspPesoMas->value());
            mas->setAnios(ui->intPeso->value());
            if ( ui->rbMacho->isChecked() == true)
                mas->setGenero(true);
            else
                mas->setGenero(false);
            mas->setEspecie(ui->txtEspecieMas->text().toStdString());
            mas->setRaza(ui->txtRazaMas->text().toStdString());
            this->setLMas(cli->getLMas());
            this->lMas->insertar(mas);
            msje.setText("Mascota Registrada Correctamente");
            msje.exec();
            //limpiarControles();

}

void registrarMascota::on_cmdElegirCli_clicked()
{
    nodoCli *aux = new nodoCli;
    aux= this->lCli->getCab();
    while(aux != NULL){
        if(ui->txtBuscarCli->text().toStdString() == aux->getCli()->getDni() ){
            this->ui->txtDniCli->setText(aux->getCli()->getDni().c_str());
            this->ui->txtNombreCli->setText(aux->getCli()->getNombres().c_str());
            this->ui->txtApellidoCli->setText(aux->getCli()->getApellidos().c_str());
            //this->ui->txtDireccionCli->toPlainText(aux->getCab()->getCli()->getDireccion().c_str());
            this->ui->txtTelefonoCli->setText(aux->getCli()->getTelefono().c_str());
            this->setCli(aux->getCli());
            break;
        }
        aux = aux->getSgte();
    }
}

classCliente *registrarMascota::getCli() const
{
    return cli;
}

void registrarMascota::setCli(classCliente *value)
{
    cli = value;
}


listaCliente *registrarMascota::getLCli() const
{
    return lCli;
}

void registrarMascota::setLCli(listaCliente *value)
{
    lCli = value;
}

listaMascota *registrarMascota::getLMas() const
{
    return lMas;
}

void registrarMascota::setLMas(listaMascota *value)
{
    lMas = value;
}
