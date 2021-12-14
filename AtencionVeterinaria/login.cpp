#include "login.h"
#include "ui_login.h"
#include <mainwindow.h>
#include "QMessageBox"

login::login(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::login)
{
    ui->setupUi(this);
}

login::~login()
{
    delete ui;
}

void login::on_cmsLogin_clicked()
{
    if(ui->txtUsuario->text()=="VET" && ui->txtContra->text()=="1234"){
        classVeterinaria *vet = new classVeterinaria();
        this->close();
        MainWindow *w = new MainWindow;
        w->setCV(vet);
        w->show();
    }
    else{
        QMessageBox msj;
        msj.setText("Usuario o contraseña incorrecta");
        msj.exec();
        this->ui->txtUsuario->clear();
        this->ui->txtContra->clear();
        this->ui->txtUsuario->setFocus();

    }
}

