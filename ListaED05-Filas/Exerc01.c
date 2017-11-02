/* Implemente a funcao reverso, que reposiciona os elementos na fila de tal forma que o
inicio da fila torna-se o fim, e vice-versa*/

#include <stdio.h>
#include <stdlib.h>

typedef struct{
	int numero;
	struct fila *prox;
}filas;
//Um novo elemento é inserido atrás da fila
filas* criaFila(filas *fila, int num){
	filas *nova = (filas*) malloc(sizeof(filas));
	nova->numero = num;
	if(fila == NULL){
		nova->prox = NULL;	
		free(fila);
	}else{
		nova->prox = fila;
	}
	return nova;
}
//Imprimi os elementos da lista
void imprimirFila(filas *fila){
    filas *cont;
	for(cont = fila; cont != NULL; cont = cont->prox){
        printf("%i\n", cont->numero);
    }
    printf("\n");
}
//A ordem da fila é trocada
filas* reverterFila(filas *fila){
	filas *nova = NULL, *cont;	
	for(cont = fila; cont; cont = cont = cont->prox){
		nova = criaFila(nova, cont->numero);
	}	
	return nova;		
}

int main(){
	filas *fila = NULL;
	
	fila = criaFila(fila, 1);
	fila = criaFila(fila, 2);
	fila = criaFila(fila, 3);
	fila = criaFila(fila, 4);
	fila = criaFila(fila, 5);	
	imprimirFila(fila);
	
	fila = reverterFila(fila);
	imprimirFila(fila);
	return 0;
}
