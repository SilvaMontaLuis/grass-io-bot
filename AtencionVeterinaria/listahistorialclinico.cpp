#include "listahistorialclinico.h"
#include "ui_listahistorialclinico.h"

listaHistorialClinico::listaHistorialClinico(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::listaHistorialClinico)
{
    ui->setupUi(this);
}

listaHistorialClinico::~listaHistorialClinico()
{
    delete ui;
}

void listaHistorialClinico::on_cmdCerrar_clicked()
{
    this->close();
}
