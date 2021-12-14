#include "classpersona.h"


string classPersona::getNombres() const
{
    return nombres;
}

void classPersona::setNombres(const string &value)
{
    nombres = value;
}

string classPersona::getApellidos() const
{
    return apellidos;
}

void classPersona::setApellidos(const string &value)
{
    apellidos = value;
}

string classPersona::getDireccion() const
{
    return direccion;
}

void classPersona::setDireccion(const string &value)
{
    direccion = value;
}

string classPersona::getTelefono() const
{
    return telefono;
}

void classPersona::setTelefono(const string &value)
{
    telefono = value;
}

string classPersona::getDni() const
{
    return dni;
}

void classPersona::setDni(const string &value)
{
    dni = value;
}
classPersona::classPersona()
{
    classPersona::codigo++;
}

classPersona::classPersona(string nombres, string apellidos, string direccion, string telefono, string dni)
{
    this->nombres = nombres;
    this->apellidos = apellidos;
    this->direccion = direccion;
    this->telefono = telefono;
    this->dni = dni;
}

classPersona::~classPersona()
{

}

