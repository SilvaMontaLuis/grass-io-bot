#ifndef LISTARCITAS_H
#define LISTARCITAS_H

#include <QDialog>

namespace Ui {
class listarCitas;
}

class listarCitas : public QDialog
{
    Q_OBJECT

public:
    explicit listarCitas(QWidget *parent = 0);
    ~listarCitas();

private slots:
    void on_cmdCerrar_clicked();

private:
    Ui::listarCitas *ui;
};

#endif // LISTARCITAS_H
