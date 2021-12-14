#include <iostream>
#include <classpersona.h>

using namespace std;

#ifndef CLASSDOCTOR_H
#define CLASSDOCTOR_H


class classDoctor : public classPersona
{
private:
    string especialidad;
    float sueldo;
public:
    classDoctor();
    classDoctor(string nombres, string apellidos, string direccion, string telefono, string dni, string especialidad, float sueldo);
    ~classDoctor();
    string getEspecialidad() const;
    void setEspecialidad(const string &value);
    float getSueldo() const;
    void setSueldo(float value);
};

#endif // CLASSDOCTOR_H
