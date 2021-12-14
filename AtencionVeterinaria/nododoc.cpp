#include "nododoc.h"


classDoctor *nodoDoc::getDoc() const
{
    return doc;
}

void nodoDoc::setDoc(classDoctor *value)
{
    doc = value;
}

nodoDoc *nodoDoc::getSgte() const
{
    return sgte;
}

void nodoDoc::setSgte(nodoDoc *value)
{
    sgte = value;
}
nodoDoc::nodoDoc()
{

}

nodoDoc::~nodoDoc()
{

}

