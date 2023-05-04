/*INTEGRANTES:
Pastrana, Oscar Tomas Francisco
Romero, Franco Matias
Ricalde, Maximiliano Jeremias*/

#include "TADlista.h"

int menu();

int main(int argc, char *argv[]) {
	char* cad; //"{1,2,3,4}" "{uno,dos}"
	int op;
	TRconjunto C1, C2, C3;
	do{
		op = menu();
		switch(op){
		case 0:
			break;
		case 1:
			fflush(stdin);
			cad=leeCadena();
			C1=crear_conj(cad);
			mostrar_conj(C1);
			break;
		case 2:	
			fflush(stdin);
			cad=leeCadena();
			C2=crear_conj(cad);
			C3=union_conj(C1,C2);
			mostrar_conj(C3);
			break;
		case 3:
			fflush(stdin);
			cad=leeCadena();
			C2=crear_conj(cad);
			C3=inter_conj(C1,C2);
			mostrar_conj(C3);
			break;
		case 4:
			//printf("\nQue conjunto desea mostrar? ");
			//scanf("%d", &valor);
			//switch(valor){
				//como hago pra saber cuantos conjuntos hay? si agrego tre conjuntos no hay drama pero si agrego muchos el switch no me sirve
			//}
			mostrar_conj(C1);//pusimos c1 para saber si funcionaba nomas
			break;
		default:
			printf("\nOpcion no valida");
		}
	} while(op!=0);
	return 0;
}


int menu(){
	int op;
	
	printf("\nMenu de opciones \n");
	printf("\n 0: Salir del Programa; \n 1: Ingresar un Conjunto; \n 2: Union de Conjuntos;\n 3: Intersección de Conjuntos;\n 4: Mostrar un Conjunto;\n\n");
	printf("Seleccione su opcion: ");
	scanf("%d", &op);
	
	return op;
}
