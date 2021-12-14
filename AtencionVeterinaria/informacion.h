#ifndef INFORMACION_H
#define INFORMACION_H

#include <QDialog>

namespace Ui {
class informacion;
}

class informacion : public QDialog
{
    Q_OBJECT

public:
    explicit informacion(QWidget *parent = 0);
    ~informacion();

private:
    Ui::informacion *ui;
};

#endif // INFORMACION_H
