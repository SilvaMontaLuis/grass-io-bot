#include <iostream>
#ifndef HISTORIACLINICA_H
#define HISTORIACLINICA_H
#include <listacliente.h>
#include <listadoctor.h>

using namespace std;

class historiaClinica
{
private:
    string codigo;
    string diagnostico;
    string fecha;
    listaCliente *lCli;
    listaDoctor *lDoc;
public:
    historiaClinica();
    ~historiaClinica();
    string getCodigo() const;
    void setCodigo(const string &value);
    string getDiagnostico() const;
    void setDiagnostico(const string &value);
    string getFecha() const;
    void setFecha(const string &value);
    listaCliente *getLCli() const;
    void setLCli(listaCliente *value);
    listaDoctor *getLDoc() const;
    void setLDoc(listaDoctor *value);
};

#endif // HISTORIACLINICA_H
