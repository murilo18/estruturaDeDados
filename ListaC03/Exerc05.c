/* Faca um programa que peca ao usuário para digitar 10 valores e some-os*/

#include <stdio.h>
#include <stdlib.h>

int q5(){
    float numero, soma = 0;
    for(int i = 1; i <= 10; i++){
        printf("Digite o %iº número: ", i);
        scanf("%f", &numero);
        soma += numero;
    }    
    printf("A soma dos números é %.1f\n", soma);
    return 0;
}