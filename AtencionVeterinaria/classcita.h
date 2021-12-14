#include <iostream>

#ifndef CLASSCITA_H
#define CLASSCITA_H
#include <classcliente.h>
#include <listaatencion.h>

using namespace std;

class classCita
{
private:
    string codigo;
    string fechaEstablecida;
    classCliente *cli;
    listaAtencion *lAten;
public:
    classCita();
    ~classCita();
    string getCodigo() const;
    void setCodigo(const string &value);
    string getFechaEstablecida() const;
    void setFechaEstablecida(const string &value);
    classCliente *getCli() const;
    void setCli(classCliente *value);
    listaAtencion *getLAten() const;
    void setLAten(listaAtencion *value);
};

#endif // CLASSCITA_H
