#include <listadoctor.h>
#ifndef REGISTRARDOCTOR_H
#define REGISTRARDOCTOR_H

#include <QDialog>

namespace Ui {
class registrarDoctor;
}

class registrarDoctor : public QDialog
{
    Q_OBJECT

public:
    explicit registrarDoctor(QWidget *parent = 0);
    ~registrarDoctor();
    listaDoctor *getLDoc() const;
    void setLDoc(listaDoctor *value);
    void limpiarControles();

private slots:

    void on_cmdCerrar_2_clicked();

    void on_cmdRegistrar_2_clicked();

private:
    Ui::registrarDoctor *ui;
    listaDoctor *lDoc;
};

#endif // REGISTRARDOCTOR_H
