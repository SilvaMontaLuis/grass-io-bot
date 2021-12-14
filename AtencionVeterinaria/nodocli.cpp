#include "nodocli.h"


classCliente *nodoCli::getCli() const
{
    return cli;
}

void nodoCli::setCli(classCliente *value)
{
    cli = value;
}

nodoCli *nodoCli::getSgte() const
{
    return sgte;
}

void nodoCli::setSgte(nodoCli *value)
{
    sgte = value;
}

nodoCli *nodoCli::getAnt() const
{
    return ant;
}

void nodoCli::setAnt(nodoCli *value)
{
    ant = value;
}
nodoCli::nodoCli()
{

}

nodoCli::~nodoCli()
{

}

