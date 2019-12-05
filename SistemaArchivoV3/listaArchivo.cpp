#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include "listaArchivo.h"
#include "archivos.h"
#include <string.h>
#include "pila.h"
using namespace std;

struct nodo_listaArchivo{
     listaArchivo sig;
     archivo ar;
};
listaArchivo global;
listaArchivo crearlsAarchivo (){
return NULL;
}


listaArchivo agregarAarchivo (listaArchivo la,char *nombre,char*ext){

   listaArchivo aux=new nodo_listaArchivo;
   aux->sig=la;
   archivo b=crearArchivo(nombre,ext);
    aux->ar=b;


   la=aux;


/*
listaArchivo temp;
  temp=la;
  if(la==NULL){
  	  listaArchivo aux=new nodo_listaArchivo;
   aux->sig=la;
   archivo b=crearArchivo(nombre,ext);
    aux->ar=b;


   la=aux;
  }
  while((temp->sig!=NULL) &&(strcmp(nombre,obtenerNombre (temp->sig->ar))<0)){
  	temp=temp->sig;
  }
   if(temp->sig==NULL){
   	listaArchivo aux=new nodo_listaArchivo;
   aux->sig=NULL;
   archivo b=crearArchivo(nombre,ext);
    aux->ar=b;


   temp->sig=aux;
   }
   else{
   listaArchivo temp2;
   temp2=temp->sig;
   listaArchivo aux=new nodo_listaArchivo;
   aux->sig=temp2;
   archivo b=crearArchivo(nombre,ext);
    aux->ar=b;


   temp->sig=aux;
}*/
return la;
}


void listarArchivo (listaArchivo la){
    listaArchivo aux;
    aux=la;
   
    while(aux!=NULL){
        char* archivo;
        char* extencion;
          archivo=obtenerNombre(aux->ar);
          extencion=obtenerExtencion(aux->ar);

        cout<<archivo;
		cout<<"."<<extencion;

        aux=aux->sig;
    }

}

listaArchivo insertContenidoLA(listaArchivo la,char *text,char*nom){
      listaArchivo aux;
      aux=la;
  
     while((aux!=NULL)&& (strcmp(obtenerNombre(aux->ar),nom)!=0)){
		aux=aux->sig;
	
	}
	 if(strcmp(obtenerNombre(aux->ar),nom)==0){
        
		insertContenidoA(aux->ar,text);
	}
	else{
	   cout<<"Archivo no encontrado";
	}

}
listaArchivo insertContenidoLACI(listaArchivo la,char *text,char*nom){
      listaArchivo aux;
      aux=la;
     while((aux!=NULL)&& (strcmp(obtenerNombre(aux->ar),nom)!=0)){
		aux=aux->sig;
	}
	 if(strcmp(obtenerNombre(aux->ar),nom)==0){

		contenidoICAR(aux->ar,text);
	}
	else{
	   cout<<"Archivo no encontrado";
	}

}

void mostrarContenidoLA(listaArchivo la,char*nombre){

	listaArchivo aux;
	aux=la;
	while((aux!=NULL)&& (strcmp(obtenerNombre(aux->ar),nombre)!=0) ){

		aux=aux->sig;
	}
	if(aux==NULL){
		cout<<"Archivo no encontrado";
	}
	else{
       cout<<nombre<<"->";
		mostrarContenidoAr (aux->ar);
	}
}

bool existeArchivo(listaArchivo la, char*nombre){

	listaArchivo aux;
	aux=la;

	while((aux!=NULL) && (strcmp(obtenerNombre(aux->ar),nombre)!=0)){
		aux=aux->sig;
	}
	if(aux==NULL){
		return false;
	}
	else{
		return true;
	}

}



/*

listaArchivo elimArchiLS (listaArchivo la, char* nom, char *ext,pila pl){

	listaArchivo aux;
	listaArchivo aux2;
	aux2=la;
	aux=la->sig;
	if (la!=NULL){
		if(strcmp(obtenerNombre(la->ar),nom)==0){
			insertarEliminado (pl,la->ar);
			la=la->sig;
			delete aux2;

		}
	}
	else{

	while (aux!=NULL){
		if(strcmp(obtenerNombre(aux->ar),nom)==0){
			 insertarEliminado (pl,aux->ar);
			 aux2->sig=aux->sig;
			 delete aux;
		}
		aux=aux->sig;
		aux2=aux2->sig;
	}
}
return la;
}*//*
listaArchivo elimArchiLS (listaArchivo la, char* nom, char *ext){

	listaArchivo aux;
	listaArchivo aux2;
	aux2=la;
	aux=la->sig;
	if (la!=NULL){
		if(strcmp(obtenerNombre(la->ar),nom)==0){
			//la->ar=eliminarArchivo(la->ar);
			la=la->sig;
			 aux->sig=NULL;
			//aux=guardar(aux);
			global=aux;
			//delete aux2;

		}
	}
	else{

	while (aux!=NULL){
		if(strcmp(obtenerNombre(aux->ar),nom)==0){
			 //aux->ar=eliminarArchivo(aux->ar);
			 aux2->sig=aux->sig;
			 aux->sig=NULL;
			 //aux=guardar(aux);
			 global=aux;
			 //delete aux;
		}
		aux=aux->sig;
		aux2=aux2->sig;
	}
}
return la;
}/*
listaArchivo guardar(listaArchivo la){
	return la;
}*/
/*
listaArchivo recuperar (listaArchivo la){
	listaArchivo aux;
	//aux=guardar(la);
	global=aux;
	aux->sig=la;
	la=aux;
	return la;
}*/
listaArchivo eliminarUlLisAR(listaArchivo la,char*nombre,int valor){
   listaArchivo aux;

   aux=la;
	/*aux=la->sig;
   if (la!=NULL){
   cout<<nombre;
   cout<<"i";
   char *n=obtenerNombre(la->ar);
   cout<<n;

		if(strcmp(obtenerNombre(la->ar),nombre)==0){
		cout<<"p";
			la->ar=eliminarUlAr(la->ar,valor);
}
     else{*/

	while (aux!=NULL){

		if(strcmp(obtenerNombre(aux->ar),nombre)==0){
			 aux->ar=eliminarUlAr(aux->ar,valor);
		}
		aux=aux->sig;

	}






return la;
}

listaArchivo copiaContLA (listaArchivo la, char* nombre1, char *nombre2){
	listaArchivo temp;
	listaArchivo aux;
	aux=la;
	temp=la;
	archivo b;


	while(temp!=NULL){
		if((strcmp(obtenerNombre(temp->ar),nombre2))==0){
		   b =copiaContAr (temp->ar);
		   }
		   temp=temp->sig;
     }
			while(aux!=NULL){
				if((strcmp(obtenerNombre(aux->ar),nombre1))==0){
                    aux->ar=pegarContAr(aux->ar,b);
				}
        aux=aux->sig;
			}

	return la;

	}

listaArchivo elimPrimeroLS (listaArchivo la, int valor, char* nombre){
listaArchivo aux;

   aux=la;


	while (aux!=NULL){

		if(strcmp(obtenerNombre(aux->ar),nombre)==0){
			 aux->ar=eliminarUlAr(aux->ar,valor);
		}
		aux=aux->sig;

	}

return la;
}
/*
listaArchivo insertarRecuperado(listaArchivo la,pila pl){
 listaArchivo aux=new nodo_listaArchivo;
 aux->ar=recuperar(pl);
 aux->sig=la;
 la=aux;
}
*/
