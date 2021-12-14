#include "classdoctor.h"


string classDoctor::getEspecialidad() const
{
    return especialidad;
}

void classDoctor::setEspecialidad(const string &value)
{
    especialidad = value;
}

float classDoctor::getSueldo() const
{
    return sueldo;
}

void classDoctor::setSueldo(float value)
{
    sueldo = value;
}

classDoctor::classDoctor()
{

}

classDoctor::classDoctor(string nombres, string apellidos, string direccion, string telefono, string dni, string especialidad, float sueldo) : classPersona(nombres, apellidos, direccion, telefono, dni)
{
    this->especialidad = especialidad;
    this->sueldo = sueldo;
}

classDoctor::~classDoctor()
{

}

