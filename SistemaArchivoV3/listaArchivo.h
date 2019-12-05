#ifndef LISTAARCHIVO_H
#define LISTAARCHIVO_H

#include"archivos.h"
#include "pila.h"

typedef struct nodo_listaArchivo* listaArchivo;

listaArchivo agregarAarchivo (listaArchivo la,char *nombre,char *ext);

listaArchivo crearlsAarchivo();

void listarArchivo (listaArchivo la);

listaArchivo  elimArchiLS (listaArchivo la, char* nom, char *ext, pila pl);

listaArchivo insertContenidoLA(listaArchivo la,char *text,char *nom);

void mostrarContenidoLA(listaArchivo la,char*nombre);

bool existeArchivo(listaArchivo la, char*nombre);

listaArchivo eliminarUlLisAR(listaArchivo la,char*nombre,int valor);

listaArchivo copiaContLA (listaArchivo la, char* nombre1, char *nombre2);

listaArchivo insertContenidoLACI(listaArchivo la,char *text,char*nom);

listaArchivo guardar(listaArchivo la);

listaArchivo recuperar (listaArchivo la);

listaArchivo insertarRecuperado(listaArchivo la,pila pl);
listaArchivo elimPrimeroLS (listaArchivo la, int valor, char* nombre);
#endif
