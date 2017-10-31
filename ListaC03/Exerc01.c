/* Faça um programa que determine o mostre os cinco primeiros múltiplos de 3, conside-
rando números maiores que 0
*/

#include <stdio.h>
#include <stdlib.h>

int q1(){
    printf("Os 5 primeiros múltiplos de 3: ");
    int numero, contador = 0;
    while(contador != 5){
        printf("%i ", numero += 3);
        contador += 1;
    }
    printf("\n");
    return 0;
}