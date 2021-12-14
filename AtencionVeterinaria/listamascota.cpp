#include "listamascota.h"


nodoMas *listaMascota::getCab() const
{
    return cab;
}

void listaMascota::setCab(nodoMas *value)
{
    cab = value;
}

int listaMascota::getNMas() const
{
    return nMas;
}

void listaMascota::setNMas(int value)
{
    nMas = value;
}
listaMascota::listaMascota()
{
    this->cab = NULL;
    this->nMas = 0;
}

listaMascota::~listaMascota()
{

}

void listaMascota::insertar( classMascota *mas){
    nodoMas *aux = new (struct nodoMas);
    nodoMas *temp = new (struct nodoMas);
    temp->setMas(mas);
    temp->setSgte(NULL);
    if( this->cab == NULL){
        this->setCab(temp);
    }else{
        aux =  this->getCab();
        while(aux->getSgte() != NULL){
            aux = aux->getSgte();
        }
        aux->setSgte(temp);
    }
    this->nMas++;
}
