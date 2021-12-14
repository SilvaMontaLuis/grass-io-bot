#include <mainwindow.h>
#include <QApplication>
#include <login.h>
#include <classveterinaria.h>

using namespace std;

int classPersona::codigo = 1;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    login *log = new login;
    log->show();
    /*login *lg = new login;
    lg->show();*/ // show metodo para mostrar un formulario

    return a.exec();
}
