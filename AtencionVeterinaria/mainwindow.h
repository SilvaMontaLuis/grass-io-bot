#include "classveterinaria.h"
#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    classVeterinaria *getCV() const;
    void setCV(classVeterinaria *value);

private slots:
    void on_actionRegistrar_Doctor_triggered();

    void on_actionRegistrar_Cliente_triggered();

    void on_actionRegistrar_Macota_triggered();

    void on_actionListar_Doctores_triggered();

    void on_actionListar_Clientes_triggered();

    void on_actionListar_Mascotas_con_sus_Clientes_triggered();

    void on_actionListar_Citas_triggered();

    void on_actionRegistrar_Casos_triggered();

    void on_actionLista_de_Casos_triggered();

    void on_actionReservar_Cita_triggered();

    void on_actionCerrar_triggered();

    void on_actionRealizar_Atencion_triggered();

    void on_actionInformacion_triggered();

private:
    Ui::MainWindow *ui;
    classVeterinaria *cV;
};

#endif // MAINWINDOW_H
