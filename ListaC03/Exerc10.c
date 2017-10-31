/*Faca um programa que calcule e mostre a soma dos 50 primeiros números pares*/

#include <stdio.h>
#include <stdlib.h>

int q10(){
    int soma = 0, contador = 2;
    while(contador <= 50){
        printf("%i ", contador);
        contador+=2;
        soma+=contador; 
    }
    printf("\nA soma dos 50 primeiros números pares é %i\n", soma);
    return 0;
}