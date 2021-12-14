#include "nodohclinica.h"


historiaClinica *nodoHClinica::getHCli() const
{
    return HCli;
}

void nodoHClinica::setHCli(historiaClinica *value)
{
    HCli = value;
}

nodoHClinica *nodoHClinica::getSgte() const
{
    return sgte;
}

void nodoHClinica::setSgte(nodoHClinica *value)
{
    sgte = value;
}
nodoHClinica::nodoHClinica()
{

}

nodoHClinica::~nodoHClinica()
{

}

