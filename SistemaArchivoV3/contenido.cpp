#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <cstring>

#include "contenido.h"
#include "constantes.h"
using namespace std;
struct nodo_contenido {
 char *texto;
 contenido sig;
};

contenido crearcontenidovacio(){
return NULL;
}
contenido crearContenid(contenido lc,char *text){
 contenido temp;

 if(lc==NULL){

     contenido aux =new (nodo_contenido);

     aux->texto=new (char[MAX_LARGO]);
     strcpy(aux->texto,text);
     aux->sig=NULL;
     lc=aux;
     temp=lc;
 }
 else{
 	while(temp->sig!=NULL){
 		temp=temp->sig;
 	}
 	contenido aux =new (nodo_contenido);

     aux->texto=new (char[MAX_LARGO]);
     strcpy(aux->texto,text);
     aux->sig=NULL;
     temp->sig=aux;
 }

   return lc;
}
contenido crearContenCI(contenido lc,char *text){
 //contenido temp;



     contenido aux =new (nodo_contenido);

     aux->texto=new (char[MAX_LARGO]);
     strcpy(aux->texto,text);
     aux->sig=lc;
     lc=aux;
    return lc;
 
}

void obtenerContenido(contenido lc){

	contenido aux;

	aux=lc;

	while (aux!=NULL){

		char*r=aux->texto;

		cout<<r;
		aux=aux->sig;
	}
}
contenido eliminarUltima(contenido lc,int valor){
      cout<<"m";
      contenido aux=lc;
      contenido temp;
      temp=lc;

       int cont=0;
       while(aux!=NULL){
         aux=aux->sig;
         cont++;
       }
       if(cont<=valor){

         while(lc!=NULL){
         aux=lc;
         lc=lc->sig;
         delete aux;
         }
       }
       else{

          int x=cont-valor;

          int res=0;
          while(temp!=NULL){
              if(res==x){

                 aux=temp;
                 temp=temp->sig;

                 delete aux;

              }
              else{

              temp=temp->sig;
              res++;
              }

          }

       }
return lc;
}
contenido eliPrimeros (contenido lc, int valor){
      contenido aux=lc;
      contenido temp;
      temp=lc;
	int cont;
	 while(aux!=NULL){
         aux=aux->sig;
         cont++;
       }
       if(cont<=valor){

         while(lc!=NULL){
         aux=lc;
         lc=lc->sig;
         delete aux;
         }
       }
       else{
        cont==0;
         // int x=cont-valor;

          //int res=0;
          while(temp!=NULL && (cont<valor)){
              //if(cont<valor){
               aux=temp;
               temp=temp->sig;
               lc=temp;
       }
       return lc;
	
}
}
contenido copiarCont (contenido lc){
	contenido aux;
	contenido copia=NULL;
	contenido copiasig;
	aux=lc;
	while(aux!=NULL){
	 if(copia==NULL){
	 	contenido copiasig;
	 	contenido temp =new (nodo_contenido);

     temp->texto=new (char[MAX_LARGO]);
     strcpy(temp->texto,aux->texto);
     temp->sig=NULL;
     copia=temp;
     aux=aux->sig;
     copiasig=copia;
	 }
	else{
		contenido temp =new (nodo_contenido);

     temp->texto=new (char[MAX_LARGO]);
     strcpy(temp->texto,aux->texto);
     temp->sig=NULL;
     copiasig->sig=temp;
	}
}
return copia;
}

//contenido

contenido pegarContenido (contenido ld, contenido lisb){
contenido aux;
aux=ld;


if (aux==NULL){
ld=lisb;
}
while (aux->sig!=NULL){
  aux=aux->sig;
}
if(aux->sig==NULL){
    aux->sig=lisb;
}

return ld;
}
