#include "listadoctor.h"
#ifndef LISTARDOCTORES_H
#define LISTARDOCTORES_H

#include <QDialog>

namespace Ui {
class listarDoctores;
}

class listarDoctores : public QDialog
{
    Q_OBJECT

public:
    explicit listarDoctores(QWidget *parent = 0);
    ~listarDoctores();

    listaDoctor *getLDoc() const;
    void setLDoc(listaDoctor *value);
    void mostrarLista(listaDoctor *lista);

private slots:
    void on_cmdCerrar_clicked();

    void on_cmdBuscarDoc_clicked();

    void on_cmdActualizar_clicked();

private:
    Ui::listarDoctores *ui;
    listaDoctor *lDoc;
};

#endif // LISTARDOCTORES_H
