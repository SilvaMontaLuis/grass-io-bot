#include "nodomas.h"


classMascota *nodoMas::getMas() const
{
    return mas;
}

void nodoMas::setMas(classMascota *value)
{
    mas = value;
}

nodoMas *nodoMas::getSgte() const
{
    return sgte;
}

void nodoMas::setSgte(nodoMas *value)
{
    sgte = value;
}

nodoMas *nodoMas::getAnt() const
{
    return ant;
}

void nodoMas::setAnt(nodoMas *value)
{
    ant = value;
}
nodoMas::nodoMas()
{

}

nodoMas::~nodoMas()
{

}

