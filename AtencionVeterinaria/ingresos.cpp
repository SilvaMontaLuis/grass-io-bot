#include "ingresos.h"
#include "ui_ingresos.h"

ingresos::ingresos(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ingresos)
{
    ui->setupUi(this);
}

ingresos::~ingresos()
{
    delete ui;
}
