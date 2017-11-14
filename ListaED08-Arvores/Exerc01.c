#include <stdio.h>
#include <stdlib.h>
//struct
typedef struct{
	int years;
	struct tree *left, *right;
}tree;
//cria um nó novo cada vez que é chamado
tree* create(tree *node, int data){
	if(node == NULL){
		node = (tree*)malloc(sizeof(tree));
		node->years = data;
		node->left = NULL;
		node->right = NULL;
	}else if(data > node->years){
		node->right = create(node->right, data);
	}else{
		node->left = create(node->left, data);
	}
	return node;
}
//mostra todos os nós
void printAll(tree *node){
	if(node != NULL){
		printf("%i ", node->years);
		printAll(node->right);
		printAll(node->left);	
	}
}
//mostra nó escolhido
void seek(tree *node, int data){
	if(node->years == data){
		printf("\n%i\n", node->years);
	}else if(data > node->years){
		seek(node->right, data);
	}else{
		seek(node->left, data);
	}
}
//deleta nó escolhido, exceto nós com dois filhos
tree* erase(tree *node, int data){
	if(node->years == data){
		if(!(node->left != NULL && node->right != NULL)){
			if(node->left == NULL && node->right == NULL){
				node = NULL;	
			}else if(node->right != NULL){
				node = node->right;
			}else if(node->left != NULL){
				node = node->left;
			}
		}else{
			printf("Impossivel remover no com dois filhos\n");
		}
	}else if(data > node->years){
		node->right = erase(node->right, data);
	}else{
		node->left = erase(node->left, data);
	}
	return node;
}
//main
int main(){
	tree *yearsOld = NULL;
	
	yearsOld = create(yearsOld, 10);
	yearsOld = create(yearsOld, 6);
	yearsOld = create(yearsOld, 15);
	yearsOld = create(yearsOld, 8);
	yearsOld = create(yearsOld, 12);
	yearsOld = create(yearsOld, 5);
	yearsOld = create(yearsOld, 9);
	
	printAll(yearsOld);
	
	seek(yearsOld, 5);
	yearsOld = erase(yearsOld, 15);
	
	printAll(yearsOld);
	return 0;
}
