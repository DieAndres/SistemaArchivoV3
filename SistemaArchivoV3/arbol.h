#ifndef ARBOL_H
#define ARBOL_H


#include "directorio.h"

typedef struct nodo_arbol* arbol;


arbol actual (arbol ab, char *nombre);

arbol crearArbol(char*nombre);

arbol retornaHijo (arbol ab);
arbol buscar (arbol ab, char *nombre);
void crearDirArbol (arbol &ab, char *nombre);

void    mostrarDirectorios (arbol ab);

void mostrarARchivos (arbol ab);

arbol eliminarDirectorio (arbol ab, char *nombre);
char* recpRuta (arbol la,char* nombre);

arbol recuperarenAr (arbol ab, pila pl);

void mostrarRuta (arbol la);

arbol crearArchiArb(arbol ab,char *nom,char*ext);

arbol insertarContArb(arbol ab,char*text,char* nom );

arbol existeDireArb(arbol ab,char*nombre );

arbol elimUltimoArb(arbol ab,char *nombreArchivo,int k);

arbol insertContenidoArb (arbol ab,char *texto,char *nombreArchivo);

arbol mostrartextoArb(arbol ab,char* nombre);

arbol ListarArchArb(arbol ab);

void mostrarNombreDirectorio(arbol ab);

bool existeDir(arbol ab,char *nombre);
#endif
