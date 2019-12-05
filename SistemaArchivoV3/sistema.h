#ifndef SISTEMA_H
#define SISTEMA_H
#include "constantes.h"
#include "directorio.h"
#include "listaArchivo.h"
#include "arbol.h"




typedef struct nodo_sistema* Sistema;
//MANIPULACION DE ARBOL
TipoRet CD (Sistema &s, Cadena nombreDirectorio);
TipoRet MKDIR(Sistema &s, Cadena parametro);
TipoRet DIR (Sistema &s, Cadena parametro);
TipoRet RMDIR (Sistema &s, Cadena nombreDirectorio);
TipoRet PWD (Sistema &s/*, Cadena nombreR*/);
//MANUPULACION DE DIRECTORIOS
//TipoRet DIR (Sistema &s, Cadena Cadena_parametro);

TipoRet CREATE (Sistema &s, Cadena nombreArchivo);

TipoRet DELETE (Sistema &s, Cadena nombreArchivo);

TipoRet UNDELETE (Sistema &s);


//MANIPULACION DE ARCHIVOS
TipoRet IC (Sistema &s, Cadena nombreArchivo, Cadena texto);

TipoRet IF (Sistema &s, Cadena nombreArchivo, Cadena texto);

TipoRet BC (Sistema &s, Cadena nombreArchivo, int k);

TipoRet BF (Sistema &s, Cadena nombreArchivo, int k);

TipoRet CAT (Sistema &s, Cadena nombreArchivo1,  Cadena nombreArchivo2);

TipoRet TYPE (Sistema &s, Cadena nombreArchivo);

Sistema eliminarArchiSis(Sistema ls, char*nom,char*ext);

Sistema insertarContSis (Sistema ls, char*texto,char*nom);
void mostrTextoSis(Sistema ls,char *nom);
bool existeArchiSis(Sistema ls, char*nombre);
Sistema inserContSisIC(Sistema ls, char*texto,char*nombre);
Sistema cArchivo (Sistema ls, char *nombre,char *ext);
Sistema recuperarSis (Sistema ls);
Sistema creaSisDirectorio (char *nombre);



TipoRet muestraArchivo(Sistema ls);

Sistema elimUltimoSis(Sistema ls, char *nombre, int valor);

Sistema copiarArSis (Sistema ls, char *nombre1, char *nombre2);



Sistema  CrearARSis(char *nombre);
Sistema CDSis(Sistema &s, char *nombre);
Sistema CrearDIR (Sistema s, char*nombre);
Sistema mostrarContDeDIRE(Sistema s);
void eliminarDirSis (Sistema &s, char* nombre);
TipoRet recuperarRuta(Sistema s);
Sistema recuperarEnSis(Sistema s, pila pl);
void nombreDireActual(Sistema s);
#endif // SISTEMA_H
