#include "listacita.h"


int listaCita::getMax() const
{
    return max;
}

void listaCita::setMax(int value)
{
    max = value;
}

int listaCita::getNCitas() const
{
    return nCitas;
}

void listaCita::setNCitas(int value)
{
    nCitas = value;
}

classCita *listaCita::getCab() const
{
    return cab;
}

void listaCita::setCab(classCita *value)
{
    cab = value;
}
listaCita::listaCita()
{

}

listaCita::~listaCita()
{

}

