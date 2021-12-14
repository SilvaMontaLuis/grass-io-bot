#include "classmascota.h"


string classMascota::getNombre() const
{
    return nombre;
}

void classMascota::setNombre(const string &value)
{
    nombre = value;
}

int classMascota::getAnios() const
{
    return anios;
}

void classMascota::setAnios(int value)
{
    anios = value;
}

string classMascota::getRaza() const
{
    return raza;
}

void classMascota::setRaza(const string &value)
{
    raza = value;
}

bool classMascota::getGenero() const
{
    return genero;
}

void classMascota::setGenero(bool value)
{
    genero = value;
}


float classMascota::getPeso() const
{
    return peso;
}

void classMascota::setPeso(float value)
{
    peso = value;
}

string classMascota::getEspecie() const
{
    return especie;
}

void classMascota::setEspecie(const string &value)
{
    especie = value;
}
classMascota::classMascota()
{
    
}

classMascota::~classMascota()
{
    
}

