/*Faca um programa que leia um número inteiro N e depois imprima os N primeiros
números naturais ımpares*/

#include <stdio.h>
#include <stdlib.h>

int q9(){
    int numero, contador = 1, i = -1;
    printf("Digite um número inteiro: ");
    scanf("%i", &numero);
    printf("Os %i primeiros números naturais ímpares: ", numero);
    while(contador <= numero){
        printf("%i ", i=i+2);
        contador += 1;
    }
    printf("\n");
    return 0;
}