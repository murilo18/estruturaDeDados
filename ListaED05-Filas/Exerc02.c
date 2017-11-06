/* Considere uma lista contendo números inteiros. Escreva uma funcao para ordenar essa
fila em ordem crescente de seus valores.*/

#include <stdio.h>
#include <stdlib.h>

typedef struct{
	int num;
	struct estrutura *prox; 
}estrutura; 
//cria uma lista usando o padrão 'fila'
estrutura* criar(estrutura *lista, int num){
	estrutura *nova = (estrutura*)malloc(sizeof(estrutura));
	nova->num = num;
	if(lista == NULL){
		free(lista);
		nova->prox = NULL;
	}else{
		nova->prox = lista;
	}
	return nova;
}
//imprimir a lista
void imprimir(estrutura *lista){
	estrutura *cont;
	for(cont = lista; cont != NULL; cont = cont->prox){
		printf("%i\n", cont->num);	
	}
}
//organizar a lista usando 'vetores'
estrutura* organizar(estrutura *lista){
	estrutura *cont, *nova = NULL;
	int tamanho = 0, a, b, contador = 0, aux = 0;
	for(cont = lista; cont != NULL; cont = cont->prox){
		tamanho += 1;
	}
	int dados[tamanho];
	while(contador <= tamanho - 1){
		dados[contador] = lista->num;
		lista = lista->prox;
		contador++;
	}	
	for(a = 0; a <= tamanho-2; a++){
		for(b = a + 1; b <= tamanho - 1; b++){
			if(dados[a] < dados[b]){
				aux = dados[a];
				dados[a] = dados[b];
				dados[b] = aux;	
			}
		}
	}
	for(a = 0; a <= tamanho-1; a++){
		nova = criar(nova, dados[a]);
	}
	return nova;
}

int main(){
	estrutura *lista = NULL;
	
	lista = criar(lista, 23);
	lista = criar(lista, 33);
	lista = criar(lista, 7);
	lista = criar(lista, 13);
	lista = criar(lista, 9);
	imprimir(lista);
	printf("\n");
	lista = organizar(lista);
	imprimir(lista);	
	return 0;
}
