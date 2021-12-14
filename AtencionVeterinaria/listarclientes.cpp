#include "listarclientes.h"
#include "ui_listarclientes.h"

listarClientes::listarClientes(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::listarClientes)
{
    ui->setupUi(this);
    this->ui->twCliente->setColumnWidth(0, 150);
    this->ui->twCliente->setColumnWidth(1, 150);
    this->ui->twCliente->setColumnWidth(2, 100);
    this->ui->twCliente->setColumnWidth(3, 150);
    this->ui->twCliente->setColumnWidth(4, 100);
}

listarClientes::~listarClientes()
{
    delete ui;
}

void listarClientes::on_cmdCerrar_clicked()
{
    this->close();
}

listaCliente *listarClientes::getLCli() const
{
    return lCli;
}

void listarClientes::setLCli(listaCliente *value)
{
    lCli = value;
}

void listarClientes::mostrarLista(listaCliente *lista){
    nodoCli *aux = new nodoCli();
    aux = lista->getCab();
    int x = 0;
    while ( aux != NULL ){
        this->ui->twCliente->insertRow(x);
        this->ui->twCliente->setItem( x, 0, new QTableWidgetItem( QString::fromUtf8( aux->getCli()->getNombres().c_str())));
        this->ui->twCliente->setItem( x, 1, new QTableWidgetItem( QString::fromUtf8( aux->getCli()->getApellidos().c_str())));
        this->ui->twCliente->setItem( x, 2, new QTableWidgetItem( QString::fromUtf8( aux->getCli()->getDni().c_str())));
        this->ui->twCliente->setItem( x, 3, new QTableWidgetItem( QString::fromUtf8( aux->getCli()->getTelefono().c_str())));
        this->ui->twCliente->setItem( x, 4, new QTableWidgetItem( QString::fromUtf8( aux->getCli()->getRuc().c_str())));
        x++;
        aux = aux->getSgte();
    }
}

void listarClientes::on_cmdBuscarCli_clicked()
{
    nodoCli *aux = new nodoCli;
    this->ui->twCliente->setRowCount(0);
    aux = this->lCli->getCab();
    while(aux != NULL){
        if(ui->txtBuscarCli->text().toStdString() == aux->getCli()->getDni() ){
            this->ui->twCliente->insertRow(0);
            this->ui->twCliente->setItem( 0, 0, new QTableWidgetItem( QString::fromUtf8( aux->getCli()->getNombres().c_str())));
            this->ui->twCliente->setItem( 0, 1, new QTableWidgetItem( QString::fromUtf8( aux->getCli()->getApellidos().c_str())));
            this->ui->twCliente->setItem( 0, 2, new QTableWidgetItem( QString::fromUtf8( aux->getCli()->getDni().c_str())));
            this->ui->twCliente->setItem( 0, 3, new QTableWidgetItem( QString::fromUtf8( aux->getCli()->getTelefono().c_str())));
            this->ui->twCliente->setItem( 0, 4, new QTableWidgetItem( QString::fromUtf8( aux->getCli()->getRuc().c_str())));
            break;
        }
        aux = aux->getSgte();
    }
}

void listarClientes::on_cmdActualizar_clicked()
{
   this->ui->twCliente->setRowCount(0);
   this->ui->txtBuscarCli->clear();
   this->mostrarLista(this->lCli);
}
