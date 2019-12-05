#ifndef PILA_H
#define PILA_H

#include"archivos.h"

typedef struct nodo_pila* pila;

pila insertarEliminado (pila pl,archivo arc);

pila recuperar (pila &pl);

char *retornarRuta(pila pl);

#endif
