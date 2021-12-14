#include "registrarhistorialclinico.h"
#include "ui_registrarhistorialclinico.h"

registrarHistorialClinico::registrarHistorialClinico(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::registrarHistorialClinico)
{
    ui->setupUi(this);
}

registrarHistorialClinico::~registrarHistorialClinico()
{
    delete ui;
}

void registrarHistorialClinico::on_cmdCerrar_clicked()
{
    this->close();
}
