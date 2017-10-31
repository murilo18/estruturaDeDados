/* Faca um programa que leia 10 inteiros positivos, ignorando nao positivos, e imprima sua
média*/

#include <stdio.h>
#include <stdlib.h>

int q7(){
    float media, numero, soma = 0;
    for(int i = 1; i <= 10; i++){
        printf("Digite o %iº número: ", i);
        scanf("%f", &numero);
        if(numero >= 0){
            media += 1;
            soma += numero;
        }    
    }
    printf("A média dos números positivos é %.1f\n", soma/media);
    return 0;
}