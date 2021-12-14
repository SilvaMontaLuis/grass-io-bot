#include <iostream>
#ifndef CLASSATENCION_H
#define CLASSATENCION_H
#include <classmascota.h>


using namespace std;

class classAtencion
{
private:
    float peso;
    string fecha;
    float costo;
    classMascota *mas;
public:
    classAtencion();
    ~classAtencion();
    float getPeso() const;
    void setPeso(float value);
    string getFecha() const;
    void setFecha(const string &value);
    float getCosto() const;
    void setCosto(float value);
    classMascota *getMas() const;
    void setMas(classMascota *value);
};

#endif // CLASSATENCION_H
