#include "classcliente.h"


string classCliente::getRuc() const
{
    return ruc;
}

void classCliente::setRuc(const string &value)
{
    ruc = value;
}

listaMascota *classCliente::getLMas() const
{
    return lMas;
}

void classCliente::setLMas(listaMascota *value)
{
    lMas = value;
}

classCliente::classCliente()
{
    this->lMas =  new listaMascota();
}

classCliente::classCliente(string nombres, string apellidos, string direccion, string telefono, string dni, string ruc) : classPersona(nombres, apellidos, direccion, telefono, dni)
{
    this->ruc = ruc;
}

classCliente::~classCliente()
{

}

