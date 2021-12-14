#ifndef NODODOC_H
#define NODODOC_H
#include <classdoctor.h>


class nodoDoc
{
private:
    classDoctor *doc;
    nodoDoc *sgte;
public:
    nodoDoc();
    ~nodoDoc();
    classDoctor *getDoc() const;
    void setDoc(classDoctor *value);
    nodoDoc *getSgte() const;
    void setSgte(nodoDoc *value);
};

#endif // NODODOC_H
