#include <stdio.h>
#include <stdlib.h>

typedef struct{
	int id;
	double saldo;
	struct conta *ant, *prox;
}conta; 
/*Inseri uma conta apenas no inicio da lista*/
conta* inserirConta(conta *atual, int num, double valor){
	conta *nova = (conta*) malloc(sizeof(conta));	
	nova->id = num;
	nova->saldo = valor;
	nova->ant = NULL;
	if(atual == NULL){						
		nova->prox = NULL;
	}else{
		atual->ant = nova;
		nova->prox = atual;
	}
	atual = nova;
	return atual;
}
/*Imprimi todas as contas*/
void imprimirConta(conta *atual){
	printf("\n<<< CONTAS >>>>\n");
	while(atual != NULL){
		printf("ID: %i | Saldo: %.2f\n", atual->id, atual->saldo);
		atual = atual->prox;
	}	
}
/*buscar qualquer conta apartir da ID*/
void buscarConta(conta *atual, int num){
	printf("\n<<< CONTA >>>>\n");
	while(atual != NULL){
		if(atual->id == num){
			printf("ID: %i | Saldo: %.2f\n", atual->id, atual->saldo);
			break;
		}
		atual = atual->prox;
	}
}
/*remove apenas a conta que estive no meio da lista*/
void removerConta(conta *atual, int num){
	conta *aux = atual, *nova = NULL;
	while(aux != NULL && aux->id != num){	
		nova = aux;
		aux = aux->prox;					
	}
	aux = aux->prox;
	nova->prox = aux;
	aux->ant = nova;
}

int main(){
	conta *minhaConta = NULL;
	
	minhaConta = inserirConta(minhaConta, 1, 200.50);
	minhaConta = inserirConta(minhaConta, 2, 350.55);
	minhaConta = inserirConta(minhaConta, 3, 454.65);
	minhaConta = inserirConta(minhaConta, 4, 555.55);
	
	imprimirConta(minhaConta); //qualquer conta
	buscarConta(minhaConta, 2); //conta desejada
	removerConta(minhaConta, 3); //conta 2 ou 3
	
	imprimirConta(minhaConta); //qualquer conta
	return 0;
}
