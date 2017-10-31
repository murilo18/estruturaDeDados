#include <stdio.h>
#include <stdlib.h>

typedef struct{
	int id;
	char caracter[15];
	struct palavra *prox;
}palavra;
/*Inseri um nó antecedente à cabeça*/
palavra* inserirPalavra(palavra *atual, int num, char dado[15]){
	palavra* newPalavra = (palavra*) malloc(sizeof(palavra));
	newPalavra->id = num;
	strcpy(newPalavra->caracter, dado);
	palavra *loop = atual;  //contador do "while"
	if(atual == NULL){
		free(atual);
		newPalavra->prox = newPalavra;
	}else{
		while(loop->prox != atual){
			loop = loop->prox;
		}
		loop->prox = newPalavra;
		newPalavra->prox = atual;
	}
	return newPalavra;
}
/*Mostra todos os nós*/
void listarPalavra(palavra *atual){
	palavra *loop = atual;
	printf("\n<<< PALAVRAS >>>\n");
	do{
		printf("ID: %i | Palavra: %s\n", loop->id, loop->caracter);
		loop = loop->prox;
	}while(loop != atual);
}
/*Mostra o nó desejado*/
void buscarPalavra(palavra *atual, int num){
	palavra *loop = atual;
	printf("\n<<< PALAVRA >>>\n");
	do{
		if(loop->id == num){
			printf("ID: %i | Palavra: %s\n", loop->id, loop->caracter);
			break;
		}
		loop = loop->prox;
	}while(loop != atual);
}
/*Remove apenas o nó da frente*/
palavra* removerPalavra(palavra *atual){
	palavra *loop = atual->prox, *nova = NULL;

		while(loop != atual){
			nova = loop;
			loop = loop->prox;	
		}
		nova->prox = loop->prox;
		return nova;
}

int main(){
	palavra *nova = NULL;
	
	nova = inserirPalavra(nova, 1, "bixo piruleta");
	nova = inserirPalavra(nova, 2, "erou");
	nova = inserirPalavra(nova, 3, "quero cafe");
	nova = inserirPalavra(nova, 4, "irineu");
	nova = inserirPalavra(nova, 5, "nao consegue");
	
	listarPalavra(nova); //qualquer nó
	buscarPalavra(nova, 5); //nó desejado
	nova = removerPalavra(nova); //apenas quem estiver na frente da lista
	
	listarPalavra(nova); //qualquer nó
	return 0;
}
