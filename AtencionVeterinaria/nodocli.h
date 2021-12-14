#ifndef NODOCLI_H
#define NODOCLI_H
#include <classcliente.h>


class nodoCli
{
private:
    classCliente *cli;
    nodoCli *sgte;
    nodoCli *ant;
public:
    nodoCli();
    ~nodoCli();
    classCliente *getCli() const;
    void setCli(classCliente *value);
    nodoCli *getSgte() const;
    void setSgte(nodoCli *value);
    nodoCli *getAnt() const;
    void setAnt(nodoCli *value);
};

#endif // NODOCLI_H
