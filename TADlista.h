#ifndef TADLISTA_H
#define TADLISTA_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAM_V 50

typedef char* Tvec[TAM_V];
typedef struct nodo {
	char * dato;
	struct nodo* sig;
}Tnodo;
typedef Tnodo* Tptrnodo;
/*typedef struct {
	
	Tvec lis;
	int tam;
	
}TRconjunto;*/

TRconjunto crear_conj(char*);//otra opcion seria que fuese un procedimiento
TRconjunto union_conj(TRconjunto, TRconjunto);//podrian ser funciones pero no se cual conviene
TRconjunto inter_conj(TRconjunto, TRconjunto);
void mostrar_conj(TRconjunto);
int cardinal_conj(TRconjunto);
char *leeCadena() ;

#endif
