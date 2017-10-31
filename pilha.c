/*Este tipo de estrutura de dados é dita ser LIFO (Last In First Out), ou seja, 
Último a Entrar é o Primeiro a Sair.*/

#include <stdio.h>
#include <stdlib.h>

typedef struct{
	int id;
	char tipo[15];
	struct beleza *prox;
}beleza;

beleza* adiciona(beleza *pilha, int num, char dado[15]){
	beleza *nova = (beleza*) malloc(sizeof(beleza));
	nova->id = num;
	strcpy(nova->tipo, dado);
	if(pilha == NULL){
		free(pilha);
		nova->prox = NULL;
		return nova;
	}else{
		nova->prox = pilha;
		return nova;
	}
}

void imprimir(beleza *pilha){
	beleza *cont;
	printf("\n===| TIPOS DE BELEZA |===\n");
	for(cont = pilha; cont != NULL; cont = cont->prox){
		printf("ID: %i | %s \n", cont->id, cont->tipo);
	}
}

void buscar(beleza *pilha, int num){
	printf("\n>>>| BELEZA ESCOLHIDA |<<<\n");
	while(pilha != NULL){
		if(pilha->id == num){
			printf("ID: %i | %s \n", pilha->id, pilha->tipo);
			break;
		}else{
			pilha = pilha->prox;
		}
	}
}

beleza* remover(beleza *pilha){
	beleza *nova = NULL;
	nova = pilha->prox;
	return nova;	
}

int main(){
	beleza *belezas = NULL;
	
	belezas = adiciona(belezas, 1, "bonito");
	belezas = adiciona(belezas, 2, "feio");
	belezas = adiciona(belezas, 3, "tem grana");
	belezas = adiciona(belezas, 4, "nao e feio");
	belezas = adiciona(belezas, 5, "ator de novela");
	belezas = adiciona(belezas, 6, "tem um corolla");
	
	imprimir(belezas);
	buscar(belezas, 2);
	belezas = remover(belezas);
	imprimir(belezas); 
	return 0;
}
