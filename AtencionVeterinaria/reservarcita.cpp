#include "reservarcita.h"
#include "ui_reservarcita.h"

reservarCita::reservarCita(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::reservarCita)
{
    ui->setupUi(this);
}

reservarCita::~reservarCita()
{
    delete ui;
}

void reservarCita::on_cmdCerrar_clicked()
{
    this->close();
}
