#ifndef LISTAHCLINICA_H
#define LISTAHCLINICA_H
#include <nodohclinica.h>


class listaHClinica
{
private:
    nodoHClinica *cab;
    int nHCli;
public:
    listaHClinica();
    ~listaHClinica();
    nodoHClinica *getCab() const;
    void setCab(nodoHClinica *value);
    int getNHCli() const;
    void setNHCli(int value);
};

#endif // LISTAHCLINICA_H
