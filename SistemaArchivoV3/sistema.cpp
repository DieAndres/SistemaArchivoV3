#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string.h>
#include "arbol.h"
#include "sistema.h"
#include "directorio.h"
#include "pila.h"
#include "listaArchivo.h"
#include "archivos.h"
struct nodo_sistema {
 arbol raiz;
 arbol actual;

};



using namespace std;

char * var=new (char[TAM_PALABRA]);
char * var2=new (char[TAM_PALABRA]);
TipoRet RMDIR (Sistema &s, Cadena nombreDirectorio){
if(existeDir(s->actual,nombreDirectorio)){
	eliminarDirectorio (s->actual,nombreDirectorio );
}
else{
	
return ERROR;
}	
}
TipoRet PWD (Sistema &s/*, Cadena nombreR*/){
		mostrarRuta (s->actual);
		return OK;
}
TipoRet CD (Sistema &s, Cadena nombreDirectorio){
	 s->actual=s->raiz;


  var = strtok (nombreDirectorio,"/ \n");

  
  //var2= strtok(NULL,"/");
 // cout<<var2;
  
 //s->actual=buscar(retornaHijo (s->raiz), var);
  //var=strtok(NULL,"/ \n");
 //var=strtok(NULL,"/ \n");
 
  //mostrarDirectorios  (s->actual);
  while(var!=NULL){
 
  s->actual=buscar(retornaHijo (s->actual), var);
  var=strtok(NULL,"/ \n");
  //cout<<var;
  
  
  }
  //mostrarNombreDirectorio(s->actual);
  return OK;
}

TipoRet MKDIR(Sistema &s, Cadena parametro){
if(existeDir(s->actual,parametro)){
	return ERROR;
}
else{
	crearDirArbol(s->actual,parametro);
return OK;
}

}
TipoRet DIR (Sistema &s, Cadena parametro){
mostrarDirectorios(s->raiz);

  
  return OK;
 
  
  
  
  
}

/*TipoRet DIR (Sistema s, Cadena Cadena_parametro){
 if(DirVacio(s->dir)){
 	cout<<"Directorio vacio";
 }
// else{

 //	ListarArchArb(s->actual);

     return OK;
 //}

}*/

TipoRet CREATE (Sistema &s, Cadena nombreArchivo){


	var = strtok (nombreArchivo,"( , .)");
	var2 = strtok  (NULL, " ( .)");
     
    
	if(existeDireArb(s->actual,var)){

		return ERROR;
	}
	else{

     
		s->actual=crearArchiArb(s->actual,var,var2);
		return OK;
	}

}
TipoRet BF (Sistema &s, Cadena nombreArchivo, int k){
     if(existeDireArb(s->actual,nombreArchivo)){
          elimUltimoArb(s->actual,nombreArchivo,k);
          return OK;
     }
     else{
        return ERROR;
     }
}
TipoRet IF (Sistema &s, Cadena nombreArchivo, Cadena texto){

	 //if(existeDireArb(s->actual,nombreArchivo)){

          insertContenidoArb (s->actual,texto,nombreArchivo);
          return OK;
     //}
     /*
     else{
        return ERROR;
     }

*/
}
TipoRet TYPE (Sistema &s, Cadena nombreArchivo){
    var = strtok (nombreArchivo,"( ,)\n");



   if(existeDireArb(s->actual,var)){

         mostrartextoArb(s->actual,var);
         return OK;
   }
   else{
      cout<<"No existe el archivo";
      return ERROR;
   }
}/*
TipoRet CAT (Sistema &s, Cadena nombreArchivo1, Cadena nombreArchivo2){

  if((existeArchDir(s->dir,nombreArchivo1))&& existeArchDir(s->dir,nombreArchivo2)){

copiarArDir(s->dir, nombreArchivo1,nombreArchivo2);
        return OK;
  }
  else{
cout<<"else"<<endl;
    return ERROR;
  }

}
TipoRet DELETE (Sistema &s, Cadena nombreArchivo){

	  var = strtok (nombreArchivo,"( , .)\n");
	var2 = strtok  (NULL, " ( .)\n");


  if(existeArchDir(s->dir,nombreArchivo)){

  	 ElimiArchivoDr(s->dir,var,var2);
  	 return OK;
  }
  else{
  	return ERROR;
  }
}

TipoRet IC (Sistema &s, Cadena nombreArchivo, Cadena texto){
	if(existeArchDir(s->dir,nombreArchivo)){

          insertContDirIC (s->dir,texto,nombreArchivo);
          return OK;
     }
     else{
        return ERROR;
     }
}

TipoRet BC (Sistema &s, Cadena nombreArchivo, int k){
  if(existeArchDir(s->dir,nombreArchivo)){
          elimPrimerDir (s->dir,nombreArchivo,k);
          return OK;
     }
     else{
        return ERROR;
     }
}


//////////////////////////////////////////////
Sistema eliminarArchiSis(Sistema ls, char*nom,char*ext){
	ElimiArchivoDr(ls->dir,nom,ext);
}



Sistema insertarContSis (Sistema ls, char*texto,char*nom){
	insertContenidoDir (ls->dir,texto,nom);
}

Sistema inserContSisIC(Sistema ls, char*texto,char*nombre){
	insertContDirIC (ls->dir,texto,nombre);
}

void mostrTextoSis(Sistema ls,char *nom){
	mostrartextoDir(ls->dir,nom);
}


Sistema creaSisDirectorio (char *nombre){
 Sistema sisA=new nodo_sistema;

 sisA->dir=crearDirectorio(nombre);

 return sisA;
}


Sistema cArchivo (Sistema ls, char *nombre,char* ext){

ls->dir=creaAr(ls->dir,nombre,ext);
return ls;
}

TipoRet muestraArchivo (Sistema ls){

     ListarArchDir(ls->dir);
return OK;



}

bool existeArchiSis(Sistema ls, char*nombre){
	 existeArchDir(ls->dir,nombre);
}

Sistema elimUltimoSis(Sistema ls, char *nombre, int valor){
 ls->dir=elimUltimoDir(ls->dir,nombre,valor);
 return ls;
}

Sistema copiarArSis (Sistema ls, char *nombre1, char *nombre2){

  ls->dir=copiarArDir(ls->dir,nombre1,nombre2);
  return ls;
}
/*Sistema recuperarSis (Sistema ls){
	ls->dir=recuperarDir (ls->dir);
}
Sistema elimPrimSis (Sistema ls, char* nombre, int valor){
 ls->dir=elimPrimerDir (ls->dir,nombre,valor);
}
*/
Sistema  CrearARSis(char *nombre){

Sistema cs= new nodo_sistema;
    cs->raiz=crearArbol(nombre);
    cs->actual=cs->raiz;
   
   
    return cs;
}
Sistema CDSis(Sistema &s, char *nombre){

  s->actual=s->raiz;
  var = strtok (nombre,"/""\n");
  cout<<var;
  var2= strtok(NULL,"/ \n");
  //cout<<var2;
  s->actual=buscar(retornaHijo (s->actual), var);
  mostrarDirectorios (s->actual);
  while((var!=NULL)){
  
  s->actual=buscar(retornaHijo (s->actual), var);
  var=strtok(NULL,"/ \n");
  var2= strtok(NULL,"/ \n");
  
  }
 

}
Sistema CrearDIR (Sistema s, char*nombre){
//strchr
 crearDirArbol(s->actual,nombre);

}
Sistema mostrarContDeDIRE(Sistema &s){

 mostrarARchivos (s->actual);
 // mostrarDirectorios (s->actual);
}

void eliminarDirSis (Sistema &s, char* nombre){

	eliminarDirectorio (s->actual,nombre);
}

TipoRet recuperarRuta(Sistema s){

 mostrarRuta (s->actual);
  return OK;
}
void nombreDireActual(Sistema s){
mostrarNombreDirectorio(s->actual);
}
/*
Sistema recuperarEnSis(Sistema s, pila pl){
s->actual=recuperarenAr (s->actual,pl);
}*/
