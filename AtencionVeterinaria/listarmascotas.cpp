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
