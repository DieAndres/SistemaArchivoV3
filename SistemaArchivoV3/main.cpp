
#include "sistema.h"
#include "constantes.h"
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string.h>


using namespace std;

int main()
{

char  *nom=new char[2];
nom[0]='/';
nom[1]='\0';
char  *noma= new char[2];
noma[0]='l';
noma[1]='\0';

char  *noma2= new char[3];
noma2[0]='r';
noma2[1]='/';
noma2[2]='\0';
char  *ext=new char[2];
ext[0]='m';
ext[1]='\0';

char*texto=new char[5];
texto[0]='H';
texto[1]='O';
texto[2]='L';
texto[3]='A';
texto[4]=' ';
texto[5]='\0';

char*texto2=new char[5];
texto2[0]='D';
texto2[1]='I';
texto2[2]='R';
texto2[3]='E';
texto2[4]='2';
texto2[5]='\0';

char*texto4=new char[6];
texto4[0]='r';
texto4[1]='/';
texto4[2]='D';
texto4[3]='I';
texto4[4]='1';
texto4[5]='\0';

char*texto3=new char[5];
texto3[0]='L';
texto3[1]='.';
texto3[2]='T';
texto3[3]='X';
texto3[4]='T';
texto3[5]='\0';

char*te=new char[5];
te[0]='D';
te[1]='I';
te[2]='1';
te[3]='\0';

int valor=0;

Sistema cs=CrearARSis(nom);
//MKDIR (cs,noma2);
//CDSis(cs,noma2);
//CD (cs, noma2);
//CREATE(cs,texto3);
//mostrarContDeDIRE(cs);
//MKDIR(cs,texto2);
//MKDIR (cs,te);

//CD(cs,texto4);
//eliminarDirSis (cs,te);
//nombreDireActual(cs);
//MKDIR (cs,texto3);
//CREATE(cs,texto3);
//mostrarContDeDIRE(cs);
//CREATE (cs, texto3);
 //DIR (cs,texto4 );
// MKDIR (cs,texto3);
//CDSis(cs,noma2);
//CDSis(cs,texto2);
//eliminarDirSis (cs,te);
//CREATE (cs, texto3);
//RMDIR (cs);
//mostrarContDeDIRE(cs);
//IF (cs, texto3, te);


//recuperarRuta(cs);
PWD(cs);
cout<<"\n";
//CDSis(sc, )
/*
	Sistema cs=creaSisDirectorio (nom);

	cArchivo (cs, noma,ext);
	cArchivo (cs, noma2,ext);

	//muestraArchivo (cs);

    insertarContSis (cs,texto,noma);
    //insertarContSis (cs,texto2,noma);
	//	 insertarContSis (cs,te,noma);
	//	inserContSisIC(cs, texto,noma);
      //  inserContSisIC(cs, texto2,noma);
    //insertarContSis (cs,te,noma);
insertarContSis (cs,texto3,noma2);
   //  mostrTextoSis(cs,noma);
	  // mostrTextoSis(cs,noma2);

   // eliminarArchiSis(cs,noma,ext);

//recuperarSis (cs);
    // muestraArchivo (cs);
   //elimUltimoSis(cs, noma,valor);
//muestraArchivo (cs);
//copiarArSis(cs, noma,noma2);
CAT(cs, noma,noma2);
cout<<endl;
cout<<"Nuevo CONTENIDO :";
mostrTextoSis(cs,noma);*/
    char * comando = new (char[TAM_PALABRA]);
	char * pch=new (char[TAM_PALABRA]);
	char * pch1=new (char[TAM_PALABRA]);


	TipoRet ret=NO_IMPLEMENTADA;
	bool ejecutado = false;
	bool salir = false;

	do{
		cout << "DIR (Cadena parametro)\n";
		cout << "CREATE (Nombre Archivo)\n";
		cout << "IF (Archivo,contenido)\n";
		cout << "TYPE (Nombre Archivo)\n";
		cout << "DELETE (Nombre Archivo con extencion)\n";
		cout << "BF (Nombre Archivo)\n";
        cout << "CAT (Nombre Archivo1, Nombre Archivo2)\n";
        cout << "IC (Nombre Archivo, Texto)\n";
        cout << "BC (Nombre Archivo)\n";
        cout << "MKDIR (Nombre Directorio)\n";
        cout << "MRDIR (Nombre Directorio)\n";
         cout << "CD (Ruta)\n";
         cout << "PWD (Ruta)\n";
		cout << "> ";
		fflush( stdin );
		ejecutado = false;

		fgets (comando, TAM_PALABRA, stdin);

		pch = strtok (comando,"( ,)");

		if (strcmp (pch, "DIR") == 0){
			pch = strtok (NULL, "( ,)\r\n");


			if (pch != NULL){
				cout<<pch<<endl;
				ret = DIR(cs,pch);

				ejecutado = true;
			}
			else
				cout << " - ERROR: Faltan Parametros.\n";
		}
		if (strcmp (pch, "CREATE") == 0){
			pch = strtok (NULL, "( ,)\r\n");


			if (pch != NULL){
				cout<<pch<<endl;
				ret = CREATE(cs,pch);

				ejecutado = true;
			}
			else
				cout << " - ERROR: Faltan Parametros.\n";
		}
		if (strcmp (pch, "IF") == 0){
			pch = strtok (NULL, "( ,)\r\n");
			pch1= strtok (NULL,"(,)\r\n");


			if (pch != NULL){
				cout<<pch<<endl;
				cout<<pch1<<endl;
				ret = IF(cs,pch,pch1);

				ejecutado = true;
			}
			else
				cout << " - ERROR: Faltan Parametros.\n";
		}
		if (strcmp (pch, "TYPE") == 0){

			pch = strtok (NULL, "( ,)\r\n");


			if (pch != NULL){
				cout<<pch<<endl;
				ret = TYPE(cs,pch);

				ejecutado = true;
			}
			else
				cout << " - ERROR: Faltan Parametros.\n";
		}
		/*if (strcmp (pch, "DELETE") == 0){

			pch = strtok (NULL, "( ,)\n");


			if (pch != NULL){
				cout<<pch<<endl;
				ret = DELETE (cs, pch);

				ejecutado = true;
			}
			else
				cout << " - ERROR: Faltan Parametros.\n";
		}
		if (strcmp (pch, "BF") == 0){
			pch = strtok (NULL, "( ,)\r\n");
			//valor= strtok (NULL,"(, )");

             cout<<"Ingresar numero a borrar";
             cin>>valor;
			if (pch != NULL){
				cout<<pch<<endl;
				ret = BF(cs,pch,valor);

				ejecutado = true;
			}
			else
				cout << " - ERROR: Faltan Parametros.\n";
		}
		if (strcmp (pch, "CAT") == 0){
			pch = strtok (NULL, "( ,)\r\n");
			pch1= strtok (NULL, "( ,)\r\n");


			if (pch != NULL){
				cout<<pch<<endl;
				cout<<pch1<<endl;
				ret = CAT(cs,pch,pch1);

				ejecutado = true;

			}
			else
				cout << " - ERROR: Faltan Parametros.\n";
		}
		if (strcmp (pch, "IC") == 0){
			pch = strtok (NULL, "( ,)\r\n");
			pch1= strtok (NULL,"(,)\r\n");


			if (pch != NULL){
				cout<<pch<<endl;
				cout<<pch1<<endl;
				ret = IC(cs,pch,pch1);

				ejecutado = true;
			}
			else
				cout << " - ERROR: Faltan Parametros.\n";
		}
		if (strcmp (pch, "BC") == 0){
			pch = strtok (NULL, "( ,)\r\n");
			//valor= strtok (NULL,"(, )");

             cout<<"Ingresar numero a borrar";
             cin>>valor;
			if (pch != NULL){
				cout<<pch<<endl;
				ret = BC(cs,pch,valor);

				ejecutado = true;
			}
			else
				cout << " - ERROR: Faltan Parametros.\n";
		}*/
		if (strcmp (pch, "MKDIR") == 0){
			pch = strtok (NULL, "( ,)\r\n");


			if (pch != NULL){
				cout<<pch<<endl;
				ret = MKDIR(cs,pch);

				ejecutado = true;
			}
			else
				cout << " - ERROR: Faltan Parametros.\n";
		}
 
       	if (strcmp (pch, "CD") == 0){
			pch = strtok (NULL, "( ,)\r\n");


			if (pch != NULL){
				cout<<pch<<endl;
				ret = CD(cs,pch);

				ejecutado = true;
			}
			else
				cout << " - ERROR: Faltan Parametros.\n";
		}
		if (strcmp (pch, "MRDIR") == 0){
			pch = strtok (NULL, "( ,)\r\n");


			if (pch != NULL){
				cout<<pch<<endl;
				ret = RMDIR(cs,pch);

				ejecutado = true;
			}
			else
				cout << " - ERROR: Faltan Parametros.\n";
		}
		if (strcmp (pch, "PWD") == 0){
			//pch = strtok (NULL, "( ,)\r\n");


			//if (pch != NULL){
				cout<<pch<<endl;
				ret = PWD(cs);

				ejecutado = true;
		//	}
		//	else
			//	cout << " - ERROR: Faltan Parametros.\n";
		}
		else if (strcmp (pch, "salir") == 0){
			salir = true;
		}
		else
			cout << " - Comando Incorrecto\n";
		if (ejecutado){
				if (ret == OK)
					cout << " - OK\n";
				else if (ret == ERROR)
					cout << " - ERROR\n";
				else
					cout << " - NO IMPLEMENTADA\n";
		}
	}
	while (!salir);
	cout << "\n\n - CHAUU!!!!\n";

    //bd = destroyBD(bd);
	delete [] comando;
	return 0;


}
