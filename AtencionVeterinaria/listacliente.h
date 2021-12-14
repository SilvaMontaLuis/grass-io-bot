#ifndef LISTACLIENTE_H
#define LISTACLIENTE_H
#include <nodocli.h>

class listaCliente
{
private:
    nodoCli *cab;
    int nCli;
public:
    listaCliente();
    ~listaCliente();
    nodoCli *getCab() const;
    void setCab(nodoCli *value);
    int getNCli() const;
    void setNCli(int value);

    void insertarCliente(classCliente *cli);
};

#endif // LISTACLIENTE_H
