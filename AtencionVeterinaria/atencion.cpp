#include "atencion.h"
#include "ui_atencion.h"

atencion::atencion(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::atencion)
{
    ui->setupUi(this);
}

atencion::~atencion()
{
    delete ui;
}

void atencion::on_cmdCerrar_clicked()
{
    this->close();
}

void atencion::on_cmdBuscarCli_clicked()
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
            break;
        }
        aux = aux->getSgte();
    }
}

void atencion::on_cmdBuscarMas_clicked()
{

}


listaAtencion *atencion::getLAte() const
{
    return lAte;
}

void atencion::setLAte(listaAtencion *value)
{
    lAte = value;
}

listaCliente *atencion::getLCli() const
{
    return lCli;
}

void atencion::setLCli(listaCliente *value)
{
    lCli = value;
}

listaMascota *atencion::getLMas() const
{
    return lMas;
}

void atencion::setLMas(listaMascota *value)
{
    lMas = value;
}

