#include <iostream>
#include <classpersona.h>

using namespace std;

#ifndef CLASSCLIENTE_H
#define CLASSCLIENTE_H
#include <listamascota.h>


class classCliente : public classPersona
{
private:
    string ruc;
    listaMascota *lMas;
public:
    classCliente();
    classCliente(string nombres, string apellidos, string direccion, string telefono, string dni, string ruc);
    ~classCliente();
    string getRuc() const;
    void setRuc(const string &value);
    listaMascota *getLMas() const;
    void setLMas(listaMascota *value);

};

#endif // CLASSCLIENTE_H
