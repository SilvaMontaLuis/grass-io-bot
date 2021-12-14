#include "listaatencion.h"


int listaAtencion::getMax() const
{
    return max;
}

void listaAtencion::setMax(int value)
{
    max = value;
}

int listaAtencion::getNAten() const
{
    return nAten;
}

void listaAtencion::setNAten(int value)
{
    nAten = value;
}

classAtencion *listaAtencion::getCab() const
{
    return cab;
}

void listaAtencion::setCab(classAtencion *value)
{
    cab = value;
}
listaAtencion::listaAtencion()
{

}

listaAtencion::~listaAtencion()
{

}

