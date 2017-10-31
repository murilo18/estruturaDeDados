/* Escreva um programa que declare um inteiro, inicialize-o com 0, e incremente-o de 1000
em 1000, imprimindo seu valor na tela, até que seu valor seja 100000 (cem mil)*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int numero = 0;
    while(numero <= 100000){
        numero += 1000;
        printf("%d \n ", numero);
    }
    printf("\n");
    return 0;

}
