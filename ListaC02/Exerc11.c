/*
Escreva um programa que leia um número inteiro maior do que zero e devolva, na tela, a
soma de todos os seus algarismos. Por exemplo, ao número 251 corresponderá o valor
8 (2 + 5 + 1). Se o número lido n˜ ao for maior do que zero, o programa terminará com a
mensagem “Número inválido”
*/

#include <stdio.h>
#include <stdlib.h>

int q11(){
    printf("Digite um número inteiro maior do que zero: ");
    int num, aux, soma = 0;
    scanf("%i", &num);
    if(num >= 0){
    aux = num; 
    while (aux > 0) { 
        soma += aux % 10; 
        aux /= 10; 
    } 
    printf("Soma dos algarismos de %i é %i\n", num, soma);    
    }else{
        printf("Número inválido!\n");
    }
    return 0;
}