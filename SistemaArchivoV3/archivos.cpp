#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>
#include "archivos.h"
#include "contenido.h"
#include "constantes.h"
#include <string.h>

using namespace std;
struct nodo_archivo {
    char *nombre;
    char *ext;
    contenido c;
};

archivo crearArchivo (char *nom,char*ext){ 

    archivo A = new nodo_archivo;

    A->nombre=new (char[TAM_PALABRA]);
    strcpy(A->nombre,nom);

    A->ext=new (char[TAM_PALABRA]);
    strcpy(A->ext,ext);

    contenido b=crearcontenidovacio();
    A->c=b;

    return A;

}
archivo insertContenidoA(archivo a,char *text){
	a->c=crearContenid(a->c,text);



}



char *obtenerNombre (archivo a){
    return a->nombre;
}
char *obtenerExtencion (archivo a){
	return a->ext;
}

void mostrarContenidoAr (archivo a){

 obtenerContenido(a->c);
}

archivo eliminarUlAr(archivo a,int valor){

contenido b=eliminarUltima(a->c,valor);
a->c=b;
return a;
}

archivo copiaContAr (archivo a){
	a->c=copiarCont (a->c);
	return a;
}

archivo pegarContAr (archivo a, archivo b){
 a->c=pegarContenido(a->c,b->c);
 return a;
}
archivo contenidoICAR(archivo a,char *texto){
	a->c=crearContenCI(a->c,texto);
}

archivo elimPrimAr (archivo a, int valor){
	a->c=eliPrimeros (a->c,valor);
}


