#include "mainwindow.h"
#include "ui_mainwindow.h"
//#include "QMessageBox"
#include <informacion.h>

#include <registrardoctor.h>
#include <registrarcliente.h>
#include <registrarmascota.h>
#include <reservarcita.h>
#include <registrarhistorialclinico.h>
#include <atencion.h>

#include <listardoctores.h>
#include <listarclientes.h>
#include <listarmascotas.h>
#include <listarcitas.h>
#include <listahistorialclinico.h>


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->centralWidget()->setStyleSheet(
                "background-image:url(:/imagenesPAF/veterinaria.jpg); background-position: center;");
    this->showMaximized();
}

MainWindow::~MainWindow()
{
    delete ui;
}

//REGISTRAR

void MainWindow::on_actionRegistrar_Doctor_triggered()
{
    registrarDoctor *rDoc = new registrarDoctor;
    rDoc->setLDoc(this->cV->getLDoc());
    rDoc->show();
}

void MainWindow::on_actionRegistrar_Cliente_triggered()
{
    registrarCliente *rCli = new registrarCliente;
    rCli->setLCli(this->cV->getLCli());
    rCli->show();
}

void MainWindow::on_actionRegistrar_Macota_triggered()
{
    registrarMascota *rMas = new registrarMascota;
    rMas->setLCli(this->cV->getLCli());
    rMas->setLMas(this->cV->getLMas());
    rMas->show();
}

void MainWindow::on_actionReservar_Cita_triggered()
{
    reservarCita *rCta = new reservarCita;
    rCta->show();
}

void MainWindow::on_actionRegistrar_Casos_triggered()
{
    registrarHistorialClinico *rHC = new registrarHistorialClinico;
    rHC->show();
}

void MainWindow::on_actionRealizar_Atencion_triggered()
{
    atencion *a = new atencion;
    a->setLCli(this->cV->getLCli());
    a->setLMas(this->cV->getLMas());
    a->setLAte(this->cV->getLAte());
    a->show();
}

//LISTAR

void MainWindow::on_actionListar_Doctores_triggered()
{
    listarDoctores *lDoc = new listarDoctores;
    lDoc->setLDoc(this->cV->getLDoc());
    lDoc->show();
    lDoc->mostrarLista(lDoc->getLDoc());
}

void MainWindow::on_actionListar_Clientes_triggered()
{
    listarClientes *lCli = new listarClientes;
    lCli->setLCli(this->cV->getLCli());
    lCli->show();
    lCli->mostrarLista(lCli->getLCli());
}

void MainWindow::on_actionListar_Mascotas_con_sus_Clientes_triggered()
{
    listarMascotas *lMas = new listarMascotas;
    lMas->setLCli(this->cV->getLCli());
    if(this->cV->getLCli()->getCab() != NULL){
       if(this->cV->getLCli()->getCab()->getCli()->getLMas()->getCab() != NULL){
           lMas->setLMas(this->cV->getLCli()->getCab()->getCli()->getLMas());
       }else
           lMas->setLMas(NULL);
    }else{
        //mensaje de no hay lista Clientes
        return;
    }
    lMas->show();
}

void MainWindow::on_actionListar_Citas_triggered()
{
    listarCitas *lCit = new listarCitas;
    lCit->show();
}
void MainWindow::on_actionLista_de_Casos_triggered()
{
    listaHistorialClinico *lHC = new listaHistorialClinico;
    lHC->show();
}

void MainWindow::on_actionInformacion_triggered()
{
    informacion *info = new informacion;
    info->show();
}

//SALIR

void MainWindow::on_actionCerrar_triggered()
{
    /*QMessageBox msje;
    msje.setText("¿Desea salir del Pograma?");
    msje.exec();*/
    this->close();
}

classVeterinaria *MainWindow::getCV() const
{
    return cV;
}

void MainWindow::setCV(classVeterinaria *value)
{
    cV = value;
}

