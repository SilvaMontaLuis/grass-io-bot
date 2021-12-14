#include "listardoctores.h"
#include "ui_listardoctores.h"

listarDoctores::listarDoctores(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::listarDoctores)
{
    ui->setupUi(this);
    this->ui->twDoctor->setColumnWidth(0, 150);
    this->ui->twDoctor->setColumnWidth(1, 150);
    this->ui->twDoctor->setColumnWidth(2, 100);
    this->ui->twDoctor->setColumnWidth(3, 100);
    this->ui->twDoctor->setColumnWidth(4, 150);
    this->ui->twDoctor->setColumnWidth(5, 100);
}

listarDoctores::~listarDoctores()
{
    delete ui;
}

void listarDoctores::on_cmdCerrar_clicked()
{
    this->close();
}

listaDoctor *listarDoctores::getLDoc() const
{
    return lDoc;
}

void listarDoctores::setLDoc(listaDoctor *value)
{
    lDoc = value;
}

void listarDoctores::mostrarLista(listaDoctor *lista){
    nodoDoc *aux = new nodoDoc;
    aux = lista->getCab();
    int x = 0;
    while ( aux != NULL ){
        this->ui->twDoctor->insertRow(x);
        this->ui->twDoctor->setItem( x, 0, new QTableWidgetItem(QString::fromUtf8((aux->getDoc()->getNombres().c_str()))));
        this->ui->twDoctor->setItem( x, 1, new QTableWidgetItem( QString::fromUtf8( aux->getDoc()->getApellidos().c_str())));
        this->ui->twDoctor->setItem( x, 2, new QTableWidgetItem( QString::fromUtf8( aux->getDoc()->getDni().c_str())));
        this->ui->twDoctor->setItem( x, 3, new QTableWidgetItem( QString::fromUtf8( aux->getDoc()->getTelefono().c_str())));
        this->ui->twDoctor->setItem( x, 4, new QTableWidgetItem( QString::fromUtf8( aux->getDoc()->getEspecialidad().c_str())));
        this->ui->twDoctor->setItem( x, 5, new QTableWidgetItem( QString::number( aux->getDoc()->getSueldo())));
        x++;
        aux = aux->getSgte();
    }
}

void listarDoctores::on_cmdBuscarDoc_clicked()
{
    nodoDoc *aux = new nodoDoc;
    this->ui->twDoctor->setRowCount(0);
    aux = this->lDoc->getCab();
    while(aux != NULL){
        if(ui->txtBuscarDoc->text().toStdString() == aux->getDoc()->getDni() ){
            this->ui->twDoctor->insertRow(0);
            this->ui->twDoctor->setItem( 0, 0, new QTableWidgetItem( QString::fromUtf8( aux->getDoc()->getNombres().c_str())));
            this->ui->twDoctor->setItem( 0, 1, new QTableWidgetItem( QString::fromUtf8( aux->getDoc()->getApellidos().c_str())));
            this->ui->twDoctor->setItem( 0, 2, new QTableWidgetItem( QString::fromUtf8( aux->getDoc()->getDni().c_str())));
            this->ui->twDoctor->setItem( 0, 3, new QTableWidgetItem( QString::fromUtf8( aux->getDoc()->getTelefono().c_str())));
            this->ui->twDoctor->setItem( 0, 4, new QTableWidgetItem( QString::fromUtf8( aux->getDoc()->getEspecialidad().c_str())));
            this->ui->twDoctor->setItem( 0, 5, new QTableWidgetItem( QString::number( aux->getDoc()->getSueldo())));
            break;
        }
        aux = aux->getSgte();
    }
}

void listarDoctores::on_cmdActualizar_clicked()
{
    this->ui->twDoctor->setRowCount(0);
    this->ui->txtBuscarDoc->clear();
    this->mostrarLista(this->lDoc);
}
