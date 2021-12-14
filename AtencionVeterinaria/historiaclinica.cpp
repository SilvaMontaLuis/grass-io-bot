#include "historiaclinica.h"


string historiaClinica::getCodigo() const
{
    return codigo;
}

void historiaClinica::setCodigo(const string &value)
{
    codigo = value;
}

string historiaClinica::getDiagnostico() const
{
    return diagnostico;
}

void historiaClinica::setDiagnostico(const string &value)
{
    diagnostico = value;
}

string historiaClinica::getFecha() const
{
    return fecha;
}

void historiaClinica::setFecha(const string &value)
{
    fecha = value;
}

listaCliente *historiaClinica::getLCli() const
{
    return lCli;
}

void historiaClinica::setLCli(listaCliente *value)
{
    lCli = value;
}

listaDoctor *historiaClinica::getLDoc() const
{
    return lDoc;
}

void historiaClinica::setLDoc(listaDoctor *value)
{
    lDoc = value;
}
historiaClinica::historiaClinica()
{

}

historiaClinica::~historiaClinica()
{

}

