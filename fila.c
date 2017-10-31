/*Este tipo de estrutura de dados é dita ser FIFO (First in, first out), ou seja, 
o primeiro elemento a entrar na estrutura é o primeiro a sair.*/

#include <stdio.h>
#include <stdlib.h>

typedef struct{
	int id; 
	char tipo[15];
	struct madeira *prox;
}madeira; 

madeira* inserir(madeira *fila, int num, char dado[15]){
	madeira *nova = (madeira*)malloc(sizeof(madeira));
	strcpy(nova->tipo, dado);
	nova->id = num;
	if(fila == NULL){
		free(fila);
		nova->prox = NULL;
		return nova;
	}else{
		nova->prox = fila;
		return nova;
	}
}

void imprimir(madeira *fila){
	madeira *cont;
    printf("\n=====MADEIRAS=====\n");
    for(cont = fila; cont != NULL; cont = cont->prox){
        printf("ID: %i | Tipo: %s\n", cont->id, cont->tipo);
    }
}

void buscar(madeira *fila, int num){
	madeira *cont;
    printf("\n=====MADEIRA=====\n");
    for(cont = fila; cont != NULL; cont = cont->prox){
        if(cont->id == num){
            printf("ID: %i | Tipo: %s\n", cont->id, cont->tipo);
            break;
        }
    }
}

void remover(madeira *fila){
	madeira *nova = NULL;
	while(fila->prox != NULL){
		nova = fila;
		fila = fila->prox;
	}
	nova->prox = NULL;
}

int main(){
	madeira *tipo = NULL;
	
	tipo = inserir(tipo, 1, "manga");
	tipo = inserir(tipo, 2, "cedro");
	tipo = inserir(tipo, 3, "pinho");
	tipo = inserir(tipo, 4, "palmeira");
	tipo = inserir(tipo, 5, "goiabeira");	
	
	imprimir(tipo);
	buscar(tipo, 2);
	remover(tipo);
	imprimir(tipo);
	return 0;
}
