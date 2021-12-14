#ifndef NODOHCLINICA_H
#define NODOHCLINICA_H
#include <historiaclinica.h>


class nodoHClinica
{
private:
    historiaClinica *HCli;
    nodoHClinica *sgte;
public:
    nodoHClinica();
    ~nodoHClinica();
    historiaClinica *getHCli() const;
    void setHCli(historiaClinica *value);
    nodoHClinica *getSgte() const;
    void setSgte(nodoHClinica *value);
};

#endif // NODOHCLINICA_H
