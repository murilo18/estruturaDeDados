/* Faca um programa que leia 10 inteiros e imprima sua média
*/

#include <stdio.h>
#include <stdlib.h>

int q6(){
    float numero, soma = 0;
    for(int i = 1; i <= 10; i++){
        printf("Digite o %iº número: ", i);
        scanf("%f", &numero);
        soma += numero;    
    }
    printf("A média dos números é %.1f\n", soma/10);
    return 0;
}