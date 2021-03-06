#include <stdio.h>
#include <stdlib.h>

typedef struct{
	int numero;
	struct arvore *esquerdo, *direito;
}arvore;

arvore* criar(arvore *raiz, int dado){
	if(raiz == NULL){
		raiz = (arvore*)malloc(sizeof(arvore));
		raiz->numero = dado;
		raiz->esquerdo = NULL;
		raiz->direito = NULL;
	}else if(dado > raiz->numero){
		raiz->direito = criar(raiz->direito, dado);
	}else{
		raiz->esquerdo = criar(raiz->esquerdo, dado);
	}
	return raiz;
}

void mostrar(arvore *node){
	if(node != NULL){
		printf("%i ", node->numero);		
		mostrar(node->direito);
		mostrar(node->esquerdo);	
	}
}

//2� - Uma funcao que conta o n�mero de n�s de uma �rvore bin�ria
int tamanho(arvore *raiz) { 
	//Sintaxe: Condi��o ? verdadeiro : falso
    return (raiz != NULL) ? (tamanho(raiz->esquerdo) + tamanho(raiz->direito) + 1) : 0;
    //se o n� atual for diferente de NULL acontecer� a contagem de n�s, sen�o, somar� zero 
}

//5� Uma funcao que calcula a altura de uma �rvore bin�ria.
int altura(arvore *raiz){
	if (raiz == NULL) 
      return -1;
   else {
   		int hd = altura(raiz->direito);
    	int he = altura(raiz->esquerdo);
      if (he < hd) return hd + 1;
      else return he + 1;
   }
}

//12� funcao que troca a sub�rvore direita pela sub�rvore esquerda de todos os n�s da �rvore
void espelho(arvore *raiz){
	if(raiz != NULL){
		arvore *aux;
		aux = raiz->esquerdo;
		raiz->esquerdo = raiz->direito;
		raiz->direito = aux;
		espelho(raiz->direito);
		espelho(raiz->esquerdo);
	}
}

int main(){
	arvore *teste = NULL;
	
	teste = criar(teste, 10);
	teste = criar(teste, 2);
	teste = criar(teste, 1);
	teste = criar(teste, 5);
	teste = criar(teste, 4);
	teste = criar(teste, 6);
	teste = criar(teste, 11);
	
	printf("Tamanho: %i\n", tamanho(teste));
	printf("Altura: %i\n", altura(teste));
	printf("Resultado: ");
	mostrar(teste);
	espelho(teste);
	printf("\nResultado trocado: ");
	mostrar(teste);
	return 0;
}
