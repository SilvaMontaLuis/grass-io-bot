#include <iostream>

using namespace std;

#ifndef CLASSMASCOTA_H
#define CLASSMASCOTA_H


class classMascota
{
private:
    string nombre;
    int anios;
    float peso;
    string especie;
    string raza;
    bool genero;
public:
    classMascota();
    ~classMascota();
    string getNombre() const;
    void setNombre(const string &value);
    int getAnios() const;
    void setAnios(int value);
    string getRaza() const;
    void setRaza(const string &value);
    bool getGenero() const;
    void setGenero(bool value);
    float getPeso() const;
    void setPeso(float value);
    string getEspecie() const;
    void setEspecie(const string &value);
};

#endif // CLASSMASCOTA_H
