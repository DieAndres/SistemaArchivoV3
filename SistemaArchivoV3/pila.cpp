#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include "pila.h"
#include "archivos.h"
#include <string.h>
using namespace std;

struct nodo_pila{
     char *ruta;
     pila sig;
     archivo arp;
};
/*
pila insertarEliminado (pila pl,archivo arc){
   pila aux= new nodo_pila;
   //aux->arp=eliminarArchivo(aux->arp); // aux->arp=arc
   aux->sig=pl;
   pl=aux;
}
/*
pila recuperar (pila &pl){
 pila aux=pl;
 pl=pl->sig;
 return aux->arp;
}
*/
char *retornarRuta(pila pl){
 return pl->ruta;
}
