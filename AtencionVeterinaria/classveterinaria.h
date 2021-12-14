#include <iostream>
#ifndef CLASSVETERINARIA_H
#define CLASSVETERINARIA_H
#include <listacliente.h>
#include <listacita.h>
#include <listadoctor.h>
#include <listamascota.h>

using namespace std;

class classVeterinaria
{
private:
    string nombre;
    string ubicacion;
    string horaAtencion;
    string duenio;
    listaCita *lCit;
    listaCliente *lCli;
    listaDoctor *lDoc;
    listaMascota *lMas;
    listaAtencion *lAte;
public:
    classVeterinaria();
    ~classVeterinaria();

    string getNombre() const;
    void setNombre(const string &value);
    string getUbicacion() const;
    void setUbicacion(const string &value);
    string getHoraAtencion() const;
    void setHoraAtencion(const string &value);
    string getDuenio() const;
    void setDuenio(const string &value);
    listaCita *getLCit() const;
    void setLCit(listaCita *value);
    listaCliente *getLCli() const;
    void setLCli(listaCliente *value);
    listaDoctor *getLDoc() const;
    void setLDoc(listaDoctor *value);
    listaMascota *getLMas() const;
    void setLMas(listaMascota *value);
    listaAtencion *getLAte() const;
    void setLAte(listaAtencion *value);
};

#endif // CLASSVETERINARIA_H
