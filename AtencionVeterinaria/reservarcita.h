#ifndef RESERVARCITA_H
#define RESERVARCITA_H

#include <QDialog>

namespace Ui {
class reservarCita;
}

class reservarCita : public QDialog
{
    Q_OBJECT

public:
    explicit reservarCita(QWidget *parent = 0);
    ~reservarCita();

private slots:
    void on_cmdCerrar_clicked();

private:
    Ui::reservarCita *ui;
};

#endif // RESERVARCITA_H
