#ifndef LISTACITA_H
#define LISTACITA_H
#include <classcita.h>


class listaCita
{
private:
    int max;
    int nCitas;
    classCita *cab;
public:
    listaCita();
    ~listaCita();
    int getMax() const;
    void setMax(int value);
    int getNCitas() const;
    void setNCitas(int value);
    classCita *getCab() const;
    void setCab(classCita *value);
};

#endif // LISTACITA_H
