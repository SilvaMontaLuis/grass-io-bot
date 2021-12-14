#include "classatencion.h"

float classAtencion::getPeso() const
{
    return peso;
}

void classAtencion::setPeso(float value)
{
    peso = value;
}

string classAtencion::getFecha() const
{
    return fecha;
}

void classAtencion::setFecha(const string &value)
{
    fecha = value;
}

float classAtencion::getCosto() const
{
    return costo;
}

void classAtencion::setCosto(float value)
{
    costo = value;
}

classMascota *classAtencion::getMas() const
{
    return mas;
}

void classAtencion::setMas(classMascota *value)
{
    mas = value;
}
classAtencion::classAtencion()
{

}

classAtencion::~classAtencion()
{

}

