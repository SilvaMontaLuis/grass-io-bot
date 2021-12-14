#include "registrardoctor.h"
#include "ui_registrardoctor.h"
#include "QMessageBox"
#include "classdoctor.h"

registrarDoctor::registrarDoctor(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::registrarDoctor)
{
    ui->setupUi(this);
}

registrarDoctor::~registrarDoctor()
{
    delete ui;
}

void registrarDoctor::on_cmdCerrar_2_clicked()
{
    this->close();
}

void registrarDoctor::on_cmdRegistrar_2_clicked()
{
    QMessageBox msje;
    classDoctor *doc = new classDoctor();
    if(ui->txtNombres->text().length() == 0){
            msje.setText("Debe Ingresar el Nonbre");
            msje.exec();
            return;
        }
    if(ui->txtApellidos->text().length() == 0){
            msje.setText("Debe Ingresar el Apellido");
            msje.exec();
            return;
        }
    if(ui->txtDni->text().length() == 0){
            msje.setText("Debe Ingresar el DNI");
            msje.exec();
            return;
        }
    if(ui->txtDireccion->toPlainText().length() == 0){
            msje.setText("Debe Ingresar la Dirección");
            msje.exec();
            return;
        }
    if(ui->txtTelefono->text().length() == 0){
            msje.setText("Debe Ingresar el Telefono");
            msje.exec();
            return;
        }
    if(ui->txtEspecialidad->text().length() == 0){
            msje.setText("Debe Ingresar la Especialidad");
            msje.exec();
            return;
        }

    doc->setNombres(ui->txtNombres->text().toStdString());
    doc->setApellidos(ui->txtApellidos->text().toStdString());
    doc->setDni(ui->txtDni->text().toStdString());
    doc->setDireccion( ui->txtDireccion->toPlainText().toStdString());
    doc->setTelefono(ui->txtTelefono->text().toStdString());
    doc->setEspecialidad(ui->txtEspecialidad->text().toStdString());
    doc->setSueldo( ui->dspSueldo->value());

    this->lDoc->insertarDoctor(doc);
    msje.setText("Doctor Registrado Correctamente");
    msje.exec();
    limpiarControles();
}

listaDoctor *registrarDoctor::getLDoc() const
{
    return lDoc;
}

void registrarDoctor::setLDoc(listaDoctor *value)
{
    lDoc = value;
}

void registrarDoctor::limpiarControles()
{
    ui->txtNombres->setText("");
    ui->txtApellidos->setText("");
    ui->txtDireccion->setText("");
    ui->txtDni->setText("");
    ui->txtTelefono->setText("");
    ui->txtEspecialidad->setText("");
    ui->dspSueldo->setValue(930);
    ui->txtNombres->setFocus();
}
