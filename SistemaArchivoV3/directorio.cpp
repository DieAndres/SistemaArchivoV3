#include "directorio.h"
#include "listaArchivo.h"
#include "archivos.h"

#include "pila.h"
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include "constantes.h"

using namespace std;
struct nodo_directorio{
   char *nombre;
   listaArchivo la;


};
char *NombreDir(directorio d){
return d->nombre;
}/*
directorio recupDir(directorio d,pila pl){
d->la=insertarRecuperado(d->la,pl);
}*/


directorio crearDirectorio (char *nom){
    directorio dir=new nodo_directorio;
    dir->nombre=new (char[TAM_PALABRA]);
    strcpy(dir->nombre,nom);
    
        listaArchivo b=crearlsAarchivo();

    dir->la=b;

    return dir;
}

directorio creaAr (directorio ld, char *nom, char *ext){
cout<<ext;
listaArchivo b= agregarAarchivo(ld->la,nom,ext);


ld->la=b;
return ld;
}

void ListarArchDir (directorio ld){




     listarArchivo(ld->la);





}

directorio insertContenidoDir (directorio ld, char *text,char *nom){

	ld->la=insertContenidoLA(ld->la,text,nom);
//	cout<<"g";
}

directorio insertContDirIC (directorio ld,char* text,char*nom){
   insertContenidoLACI(ld->la,text,nom);
}

void mostrartextoDir (directorio ld, char *nom){

	mostrarContenidoLA(ld->la,nom);
}

bool DirVacio(directorio d){
	if(d==NULL){
		return true;
	}
	else{
		return false;
	}
}
bool existeArchDir(directorio ld, char*nombre){

	if(existeArchivo(ld->la,nombre)){
	     return true;
	}
	else{
	   return false;
	}
}
/*
directorio ElimiArchivoDr (directorio ld, char *nom, char*ext,pila pl){
	ld->la=elimArchiLS(ld->la,nom,ext,pl);
	return ld;
}*/

directorio elimUltimoDir(directorio ld, char *nombre, int valor){
   ld->la=eliminarUlLisAR(ld->la,nombre,valor);
   return ld;
}
directorio copiarArDir (directorio ld, char *nombre1, char *nombre2){
ld->la=copiaContLA(ld->la,nombre1,nombre2);
return ld;

}/*
directorio recuperarDir (directorio ld){
  ld->la=recuperar (ld->la);
}*/
directorio elimPrimerDir (directorio ld,char*nombre, int valor){
	ld->la=elimPrimeroLS (ld->la,valor,nombre);
	return ld;
}
