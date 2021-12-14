#include "listahclinica.h"


nodoHClinica *listaHClinica::getCab() const
{
    return cab;
}

void listaHClinica::setCab(nodoHClinica *value)
{
    cab = value;
}

int listaHClinica::getNHCli() const
{
    return nHCli;
}

void listaHClinica::setNHCli(int value)
{
    nHCli = value;
}
listaHClinica::listaHClinica()
{
    this->cab = NULL;
    this->nHCli = 0;
}

listaHClinica::~listaHClinica()
{

}

