#include "listacliente.h"


nodoCli *listaCliente::getCab() const
{
    return cab;
}

void listaCliente::setCab(nodoCli *value)
{
    cab = value;
}

int listaCliente::getNCli() const
{
    return nCli;
}

void listaCliente::setNCli(int value)
{
    nCli = value;
}
listaCliente::listaCliente()
{
    this->cab = NULL;
    this->nCli = 0;
}

listaCliente::~listaCliente()
{

}

void listaCliente::insertarCliente( classCliente *cli){
    nodoCli *aux = new (struct nodoCli);
    nodoCli *temp = new (struct nodoCli);
    temp->setCli(cli);
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
    this->nCli++;
}
