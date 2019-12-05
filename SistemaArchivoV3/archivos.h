#ifndef ARCHIVO_H
#define ARCHIVO_H


#include "contenido.h"

typedef struct nodo_archivo* archivo;

archivo crearArchivo (char *nom,char *ext);

char *obtenerNombre (archivo a);

char *obtenerExtencion (archivo a);

archivo eliminarArchivo(archivo &a);

archivo insertContenidoA(archivo a,char *text);
void mostrarContenidoAr (archivo a);
archivo eliminarUlAr(archivo a,int valor);
archivo copiaContAr (archivo a);
archivo pegarContAr (archivo a, archivo b);
archivo contenidoICAR(archivo a,char *texto);
archivo elimPrimAr (archivo a, int valor);
#endif
