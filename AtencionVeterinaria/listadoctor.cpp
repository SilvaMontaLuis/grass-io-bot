#include "listadoctor.h"


nodoDoc *listaDoctor::getCab() const
{
    return cab;
}

void listaDoctor::setCab(nodoDoc *value)
{
    cab = value;
}

int listaDoctor::getNDoc() const
{
    return nDoc;
}

void listaDoctor::setNDoc(int value)
{
    nDoc = value;
}
listaDoctor::listaDoctor()
{
    this->cab = NULL;
    this->nDoc = 0;
}

listaDoctor::~listaDoctor()
{

}

void listaDoctor::insertarDoctor(classDoctor *doc){
    nodoDoc *aux = new (struct nodoDoc);
    nodoDoc *temp = new (struct nodoDoc);
    temp->setDoc(doc);
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
    this->nDoc++;
}

/*void listaDoctor::buscarDoctor(classDoctor *doc){
    nodoDoc *aux = this->cab;
    if(aux != NULL){
        string nombre;
        nombre = doc->getNombres();
        while(aux != NULL){
            if(nombre == aux->getDoc()->getNombres()){
                this->mostrarBusqueda();
            }
            aux->getSgte;
        }
    }
    else{
        return;
    }
}*/
