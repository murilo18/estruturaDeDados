/* Faca um algoritmo utilizando o comando while que mostra uma contagem regressiva
na tela, iniciando em 10 e terminando em 0. Mostrar uma mensagem “FIM!” após a
contagem*/

#include <stdio.h>
#include <stdlib.h>

int q3(){
    for(int i = 10; i >= 0; i--){
        printf("%i ", i);
    }
    return 0;
}