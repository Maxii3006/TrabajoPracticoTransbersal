#include "TADlista.h"

/*void inicializa(TRconjunto * c){
	c->tam=-1;
}*/

Tptrnodo crea_nodo(){
	Tptrnodo nvo;
	nvo=Tptrnodo(malloc(sizeof(Tnodo)));
	nvo->dato=elem;
	nvo->sig=NULL;
	return nvo;
}
Tptrnodo agrega_elemento(char * elem){
	
}
		
/*void agrega_elemento(TRconjunto* C, char* token)
{
	C->tam++;
	C->lis[C->tam]=token;
}*/

int pertenece(Tvec vec, int tam, char* cad)
{
	int i=0;
	while(i<tam && strcmp(vec[i],cad)!=0){
		i++;
	}
	if(i<tam){
		return 1;
	}
	else return 0;
	
}

TRconjunto crear_conj(char *cad){
	
	Tptrnodo lista=NULL;
	lista=crea_nodo(strtok(cad, "{},"))
	
	if(token!=NULL)
	{
		agrega_elemento(&nvo, token);
	}
	while(token!=NULL)
	{
		token=strtok(NULL, "{},");
		if(token!=NULL)
			
		{
			if(pertenece(nvo.lis, nvo.tam, token)==0)
				
				agrega_elemento(&nvo, token);
		}
	}
	
	
	return nvo;
	
}

	
	
	
	TRconjunto union_conj(TRconjunto C1, TRconjunto C2 )
	{
		TRconjunto C3;
		int i;
		C3=C1;
		//C3.tam=-1;
		
		for(i=0; i<=C2.tam;i++)
		{
			if(pertenece(C3.lis, C3.tam, C2.lis[i])==0){
				agrega_elemento(&C3, C2.lis[i]);
			}
			
		}
		
		return C3;
	}
	
 int cardinal_conj(TRconjunto A){
	return A.tam;
}
	char* leeCadena(){
		char* cadena=NULL;
		void* aux;
		int t=0;
		char c;
		
		cadena=(char*) malloc(sizeof(char)); 
		if (cadena==NULL) return cadena;
		else {
			c=getchar();
			if (c!=EOF) { /*si el primer caracter no es fin de archivo*/
				t=0;
				if (c!='\n') {   //agregar el primer caracter leído solo si no es enter
					cadena[t]=c; //equivalente *cadena=c
					t++;
				}	
				/*LEER DEL SEGUNDO CARACTER EN ADELANTE*/
				/*leer el resto de los caractaeres y agregarlos a la cadena*/
				c=getchar();
				while (c!=EOF && c!='\n') {
					t++;
					aux=(char*)realloc(cadena,sizeof(char)*t);
					if (aux!=NULL) {
						cadena=aux;
						cadena[t-1]=c;
					} else break;
					c=getchar();
				}
				/*agregar marca de fin de cadena*/
				aux=(char*)realloc(cadena,sizeof(char)*(t+1));
				if (aux!=NULL) {
					cadena=aux;
					cadena[t]='\0';
				} else cadena[t-1]='\0';
			} else {
				/*si se lee el fin del archivo en el primer caracter, no hay cadena*/
				/*solo poner la marca de fin de cadena*/
				cadena[0]='\0';
			}
			return cadena;
		}
	}
			
			
TRconjunto inter_conj(TRconjunto C1, TRconjunto C2)
{
	TRconjunto C3;
	//C3.tam=-1;
	inicializa(&C3);
	
	int i;
	
	for(i=0; i<=C2.tam; i++)
	{
		if(pertenece(C1.lis, C1.tam, C2.lis[i])==0)
		{
			agrega_elemento(&C3, C2.lis[i]);
		}
	}
	
	return C3;	
}

void mostrar_conj(TRconjunto C)
{
	int i;
	printf("\nConjunto resultante: \n");
	printf("\n{");
	for(i=0; i<=C.tam-1; i++)
	{
		printf("%s, ", C.lis[i]);
	}
	printf("%s}\n",C.lis[C.tam]);
	
}




