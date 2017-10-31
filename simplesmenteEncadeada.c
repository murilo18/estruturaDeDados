#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int id;
    char nome[20];
    struct aluno *prox;
}aluno;

/*Inseri aluno apenas no inicio da lista atual*/
aluno* inserirAluno(aluno *atual, int id, char nome[20]){
    aluno *novo = (aluno*) malloc(sizeof(aluno));
    strcpy(novo->nome, nome);
    novo->id = id;
    novo->prox = atual;
    return novo;
}

/*Imprime todos os alunos*/
void imprimirAluno(aluno *lista){
    aluno *cont;
    printf("\n=====ALUNOS=====\n");
    for(cont = lista; cont != NULL; cont = cont->prox){
        printf("Nome: %s | ID: %i\n", cont->nome, cont->id);
    }
}
/*Busca qualquer aluno a partir de sua ID*/
void buscarAluno(aluno *lista, int num){
    aluno *cont;
    printf("\n=====ALUNO=====\n");
    for(cont = lista; cont != NULL; cont = cont->prox){
        if(cont->id == num){
            printf("Nome: %s | ID: %i\n", cont->nome, cont->id);
            break;
        }
    }
}
/*Só não remove o primeiro aluno, o último que entrou*/
void removerAluno(aluno *lista, int num){
    aluno *a = NULL, *p = lista;
    while (p != NULL && p->id != num) {
        a = p;
        p = p->prox;
    }
    a->prox = p->prox;
    free(p);
}

int main(void){
    aluno *lista = NULL;

    lista = inserirAluno(lista, 1, "Murilo");
    lista = inserirAluno(lista, 2, "Matheus");
    lista = inserirAluno(lista, 3, "Marcos");
    lista = inserirAluno(lista, 4, "Joao");

    imprimirAluno(lista); //qualquer aluno
    buscarAluno(lista, 2); //aluno desejado
    removerAluno(lista, 4); //aluno 1, 2 ou 3

    imprimirAluno(lista); //qualquer aluno
    return 0;
}
