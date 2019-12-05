#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>
#include "directorio.h"
#include "constantes.h"
#include "arbol.h"
#include <string.h>
#include "pila.h"

using namespace std;

struct nodo_arbol {
    arbol hijo;
    arbol herm;
    arbol padre;
    directorio dire;
};

arbol crearArchiArb(arbol ab,char *nom,char*ext){
cout<<nom;
creaAr (ab->dire,nom,ext);
}
arbol elimUltimoArb(arbol ab,char *nombreArchivo,int k){
elimUltimoDir(ab->dire,nombreArchivo,k);
}

arbol insertContenidoArb (arbol ab,char *texto,char *nombreArchivo){
insertContenidoDir (ab->dire,texto,nombreArchivo);
}


arbol mostrartextoArb(arbol ab,char* nombre){
mostrartextoDir (ab->dire,nombre);
}

arbol insertarContArb(arbol ab,char*text,char* nom ) {
insertContenidoDir (ab->dire,text,nom);
}
arbol inserContICArb (arbol ab, char* text,char *nom){
insertContDirIC (ab->dire,text,nom);
}

arbol existeDireArb(arbol ab,char*nombre ){
existeArchDir(ab->dire, nombre);
}

arbol ListarArchArb (arbol ab){
   
 ListarArchDir (ab->dire);

}

arbol crearArbol(char*nombre){
  arbol raiz= new nodo_arbol;
    raiz->dire=crearDirectorio(nombre);
    raiz->hijo=NULL;
    raiz->herm=NULL;
    raiz->padre=NULL;
    return raiz;
}

void crearDirArbol (arbol &ab, char *nombre){
 if(ab->hijo==NULL){
    arbol aux=new nodo_arbol;
    directorio b=crearDirectorio(nombre);
    aux->dire=b;
    aux->hijo=NULL;
    aux->herm=NULL;
    ab->hijo=aux;
    aux->padre=ab;

 }
   else {
   	
    arbol aux=new nodo_arbol;
    directorio b=crearDirectorio(nombre);
    aux->dire=b;
    aux->hijo=NULL;
    aux->herm=ab->hijo;
    ab->hijo=aux;
    aux->padre=ab;
   }
}
arbol buscar (arbol ab, char *nombre){
 arbol aux=ab;

 while(aux!=NULL){
   if(strcmp(NombreDir(aux->dire),nombre)==0){
    return aux;
 }

 else {
    aux=aux->herm;
 }
  }
 
}
bool existeDir(arbol ab,char *nombre){
arbol aux=ab->hijo;
 


	while((aux!=NULL) && (strcmp(NombreDir(aux->dire),nombre)!=0)){
		aux=aux->herm;
	}
	if(aux==NULL){
		return false;
	}
	else{
		return true;
	}
}

arbol retornaHijo (arbol ab){
return ab->hijo;
}

void mostrarDirectorios (arbol ab){



if(ab!=NULL){
	
    mostrarDirectorios(ab->herm);
     mostrarDirectorios(ab->hijo);
	 cout<<"Directorio: ";
	cout<<NombreDir(ab->dire);
	cout<<"\n";
	cout<<"Archivos: ";
	ListarArchDir (ab->dire);
	cout<<"\n";
	
}
/*
while(aux!=NULL){
    cout<<"Directorio: ";
	cout<<NombreDir(aux->dire);
	cout<<"\n";
	cout<<"Archivos: ";
	ListarArchDir (ab->dire);
	cout<<"\n";
	aux=aux->herm;
	cout<<"\n";
}*/
}
void mostrarARchivos (arbol ab){
   
   ListarArchDir (ab->dire);
}


arbol eliminarDirectorio (arbol ab, char *nombre){

/*	arbol aux=ab->hijo;
    aux=aux->herm;
    
    while(aux!=NULL){
	if(strcmp(NombreDir(aux->herm->dire),nombre)==0){
        arbol aux2;
       aux2=aux->herm;
       aux->herm=aux2->herm;
		delete aux2;
	
  }
   else if(strcmp(NombreDir(ab->hijo->dire),nombre)==0){
      arbol aux2;
      aux2=ab->hijo;
      ab->hijo=ab->herm;
      delete aux2;
   }
   else{
   cout<<"no existe el directorio";
   }
   aux=aux->herm;
	}*/
 arbol temp=ab->hijo;
 if(temp==NULL){

   return NULL;
  }
  else {
  	cout<<"ESTE ES EL NOMBRE"<<nombre;
   arbol aux=temp->herm;
   if(strcmp(NombreDir(ab->hijo->dire),nombre)==0){

       ab->hijo=temp->herm;

		delete temp;
		return ab;
  }
 else if(strcmp(NombreDir(aux->dire),nombre)==0){
    temp->herm=aux->herm;
    delete aux;
    return ab;

 }

 else {
    return eliminarDirectorio(aux,nombre);
 }
 }
}

void mostrarRuta (arbol la){
 arbol aux=la;
 cout<<"La ruta actual es: ";
 while (aux->padre!=NULL){

   // strcpy(NombreDir(aux->dire),nombre)
    cout<<"/"<<NombreDir(aux->dire);
 aux=aux->padre;
 }
}
char* recpRuta (arbol la,char*nombre){


  /*
  arbol aux=la;
  char * ruta=new (char[TAM_PALABRA]);
  while(aux->padre!=NULL){
  strcpy(NombreDir(aux->dire),nombre);
  strcat("/",ruta);
  strcat(ruta,nombre);
  aux=aux->padre;
  }
  return ruta;*/
}

void mostrarNombreDirectorio(arbol ab){
	NombreDir(ab->dire);
}
/*
arbol recuperarenAr (arbol ab, pila pl){
 ab->dire=recupDir(ab->dire,pl);
}*/
