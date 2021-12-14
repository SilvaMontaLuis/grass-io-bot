#ifndef LISTADOCTOR_H
#define LISTADOCTOR_H
#include <nododoc.h>


class listaDoctor
{
private:
    nodoDoc *cab;
    int nDoc;
public:
    listaDoctor();
    ~listaDoctor();
    nodoDoc *getCab() const;
    void setCab(nodoDoc *value);
    int getNDoc() const;
    void setNDoc(int value);

    void insertarDoctor(classDoctor *doc);
    void buscarDoctor(classDoctor *doc);
    //void mostrarBusqueda();
};

#endif // LISTADOCTOR_H
