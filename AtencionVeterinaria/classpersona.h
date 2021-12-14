#include <iostream>

using namespace std;

#ifndef CLASSPERSONA_H
#define CLASSPERSONA_H


class classPersona
{
private:
    static int codigo;
    string nombres;
    string apellidos;
    string direccion;
    string telefono;
    string dni;
public:
    classPersona();
    classPersona(string nombres, string apellidos, string direccion, string telefono, string dni);
    ~classPersona();
    string getNombres() const;
    void setNombres(const string &value);
    string getApellidos() const;
    void setApellidos(const string &value);
    string getDireccion() const;
    void setDireccion(const string &value);
    string getTelefono() const;
    void setTelefono(const string &value);
    string getDni() const;
    void setDni(const string &value);
};

#endif // CLASSPERSONA_H
