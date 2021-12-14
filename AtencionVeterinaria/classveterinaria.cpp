#include "classveterinaria.h"


string classVeterinaria::getNombre() const
{
    return nombre;
}

void classVeterinaria::setNombre(const string &value)
{
    nombre = value;
}

string classVeterinaria::getUbicacion() const
{
    return ubicacion;
}

void classVeterinaria::setUbicacion(const string &value)
{
    ubicacion = value;
}

string classVeterinaria::getHoraAtencion() const
{
    return horaAtencion;
}

void classVeterinaria::setHoraAtencion(const string &value)
{
    horaAtencion = value;
}

string classVeterinaria::getDuenio() const
{
    return duenio;
}

void classVeterinaria::setDuenio(const string &value)
{
    duenio = value;
}

listaCita *classVeterinaria::getLCit() const
{
    return lCit;
}

void classVeterinaria::setLCit(listaCita *value)
{
    lCit = value;
}

listaCliente *classVeterinaria::getLCli() const
{
    return lCli;
}

void classVeterinaria::setLCli(listaCliente *value)
{
    lCli = value;
}

listaDoctor *classVeterinaria::getLDoc() const
{
    return lDoc;
}

void classVeterinaria::setLDoc(listaDoctor *value)
{
    lDoc = value;
}


listaMascota *classVeterinaria::getLMas() const
{
    return lMas;
}

void classVeterinaria::setLMas(listaMascota *value)
{
    lMas = value;
}

listaAtencion *classVeterinaria::getLAte() const
{
    return lAte;
}

void classVeterinaria::setLAte(listaAtencion *value)
{
    lAte = value;
}
classVeterinaria::classVeterinaria()
{
    this->nombre = "ALIM";
    this->ubicacion = "Chiclayo";
    this->horaAtencion = "lunes a sabados / 9:00 am - 7:00 pm ";
    this->duenio = "Silva";
    this->lCit = new listaCita();
    this->lCli = new listaCliente();
    this->lDoc = new listaDoctor();
}

classVeterinaria::~classVeterinaria()
{

}

