#ifndef LISTAMASCOTA_H
#define LISTAMASCOTA_H
#include <nodomas.h>


class listaMascota
{
private:
    nodoMas *cab;
    int nMas;
public:
    listaMascota();
    ~listaMascota();
    nodoMas *getCab() const;
    void setCab(nodoMas *value);
    int getNMas() const;
    void setNMas(int value);
    void insertar(classMascota *mas);
};

#endif // LISTAMASCOTA_H
