#include "listarcitas.h"
#include "ui_listarcitas.h"

listarCitas::listarCitas(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::listarCitas)
{
    ui->setupUi(this);
}

listarCitas::~listarCitas()
{
    delete ui;
}

void listarCitas::on_cmdCerrar_clicked()
{
    this->close();
}
