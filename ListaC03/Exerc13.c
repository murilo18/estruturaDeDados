/*Fac¸a um programa que leia um número inteiro positivo par N e imprima todos os números
pares de 0 até N em ordem crescente.*/

#include <stdio.h>
#include <stdlib.h>

int q13(){
    int num, cont = 0;
    printf("Digite um numero inteiro positivo par: ");
    scanf("%i", &num);
    printf("Numeros pares de 0 ate %i\n", num);
    while(cont <= num){
            if(cont % 2 == 0){
                printf("%i\n", cont);
            }
        cont += 1;
    }
    return 0;
}
