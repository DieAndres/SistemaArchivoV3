#ifndef DIRECTORIO_H
#define DIRECTORIO_H
#include"listaArchivo.h"



typedef struct nodo_directorio* directorio;

char *NombreDir(directorio d);

directorio crearDirectorio (char *nom);

directorio creaAr (directorio ld, char *nom,char *ext);

void ListarArchDir (directorio ld);

directorio ElimiArchivoDr (directorio ld, char *nom, char*ext,pila pl);

directorio insertContenidoDir (directorio ld, char *text,char*nom);

void mostrartextoDir (directorio ld, char *nom);

bool DirVacio(directorio d);

bool existeArchDir(directorio ld, char*nombre);

directorio elimUltimoDir(directorio ld, char *nombre, int valor);

directorio recupDir(directorio d,pila pl);

directorio copiarArDir(directorio ld, char *nombre1, char *nombre2);
directorio insertContDirIC (directorio ld,char* text,char*nom);
directorio recuperarDir (directorio ld);
directorio elimPrimerDir (directorio ld,char*nombre, int valor);
#endif
