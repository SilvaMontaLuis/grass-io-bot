#ifndef LISTAATENCION_H
#define LISTAATENCION_H
#include <classatencion.h>


class listaAtencion
{
private:
    int max;
    int nAten;
    classAtencion *cab;
public:
    listaAtencion();
    ~listaAtencion();
    int getMax() const;
    void setMax(int value);
    int getNAten() const;
    void setNAten(int value);
    classAtencion *getCab() const;
    void setCab(classAtencion *value);
};

#endif // LISTAATENCION_H
