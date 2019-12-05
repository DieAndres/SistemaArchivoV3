#ifndef CONTENIDO_H
#define CONTENIDO_H




typedef struct nodo_contenido* contenido;

contenido crearcontenidovacio();


contenido crearContenid(contenido lc,char *text);

void obtenerContenido(contenido lc);
contenido eliminarUltima(contenido lc,int valor);
contenido copiarCont (contenido lc);
contenido pegarContenido (contenido ld, contenido lisb);
contenido crearContenCI(contenido lc,char *text);

contenido eliPrimeros (contenido lc, int valor);
#endif
