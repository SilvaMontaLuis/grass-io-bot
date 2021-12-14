#ifndef INGRESOS_H
#define INGRESOS_H

#include <QDialog>

namespace Ui {
class ingresos;
}

class ingresos : public QDialog
{
    Q_OBJECT

public:
    explicit ingresos(QWidget *parent = 0);
    ~ingresos();

private:
    Ui::ingresos *ui;
};

#endif // INGRESOS_H
