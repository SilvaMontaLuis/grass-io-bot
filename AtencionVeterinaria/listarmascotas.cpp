#include "listarmascotas.h"
#include "ui_listarmascotas.h"

listarMascotas::listarMascotas(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::listarMascotas)
{
    ui->setupUi(this);
}

listarMascotas::~listarMascotas()
{
    delete ui;
}

void listarMascotas::on_cmdCerrar_clicked()
{
    this->close();
}

void listarMascotas::on_cmdBuscarDoc_clicked()
{
    string dni = ui->txtBuscarDoc->text().toStdString();
    nodoCli *aux = this->lCli->getCab();
    while(aux != NULL){
        if(aux->getCli()->getDni() == dni){
            break;
        }
        aux = aux->getSgte();
    }
    ui->txtDniCli->setText(QString::fromStdString(aux->getCli()->getDni())); // From = desde
    ui->txtNombreCli->setText(QString::fromStdString(aux->getCli()->getNombres())); // From = desde
    //muestras el resto

    //valida que haya mascotas para mostrar la tabla de mascotas
    if(aux->getCli()->getLMas()->getCab() == NULL)
        return;
    this->setLMas(aux->getCli()->getLMas()); //actualiza la lista de mascotas correspondiente al cliente buscado
    //actualizar tabla
}

listaMascota *listarMascotas::getLMas() const
{
    return lMas;
}

void listarMascotas::setLMas(listaMascota *value)
{
    lMas = value;
}

listaCliente *listarMascotas::getLCli() const
{
    return lCli;
}

void listarMascotas::setLCli(listaCliente *value)
{
    lCli = value;
}

void listarMascotas::on_cmdActualizar_clicked()
{
    //limpia las cajas de texto y la tabla
}
