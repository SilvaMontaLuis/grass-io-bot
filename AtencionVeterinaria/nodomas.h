#ifndef NODOMAS_H
#define NODOMAS_H
#include <classmascota.h>

class nodoMas
{
private:
    classMascota *mas;
    nodoMas *sgte;
    nodoMas *ant;
public:
    nodoMas();
    ~nodoMas();
    classMascota *getMas() const;
    void setMas(classMascota *value);
    nodoMas *getSgte() const;
    void setSgte(nodoMas *value);
    nodoMas *getAnt() const;
    void setAnt(nodoMas *value);
};

#endif // NODOMAS_H
