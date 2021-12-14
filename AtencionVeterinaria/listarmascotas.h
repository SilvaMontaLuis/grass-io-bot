#ifndef LISTARMASCOTAS_H
#define LISTARMASCOTAS_H

#include <QDialog>

namespace Ui {
class listarMascotas;
}

class listarMascotas : public QDialog
{
    Q_OBJECT

public:
    explicit listarMascotas(QWidget *parent = 0);
    ~listarMascotas();

private slots:
    void on_cmdCerrar_clicked();

private:
    Ui::listarMascotas *ui;
};

#endif // LISTARMASCOTAS_H
