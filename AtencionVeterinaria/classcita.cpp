#include "classcita.h"


string classCita::getCodigo() const
{
    return codigo;
}

void classCita::setCodigo(const string &value)
{
    codigo = value;
}

string classCita::getFechaEstablecida() const
{
    return fechaEstablecida;
}

void classCita::setFechaEstablecida(const string &value)
{
    fechaEstablecida = value;
}

classCliente *classCita::getCli() const
{
    return cli;
}

void classCita::setCli(classCliente *value)
{
    cli = value;
}

listaAtencion *classCita::getLAten() const
{
    return lAten;
}

void classCita::setLAten(listaAtencion *value)
{
    lAten = value;
}
classCita::classCita()
{

}

classCita::~classCita()
{

}

