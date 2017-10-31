/* Escreva um programa que, dados dois números inteiros, mostre na tela o maior deles,
assim como a diferenc¸a existente entre ambos
*/

#include <stdio.h>
#include <stdlib.h>

int q6(){
    int n1, n2;
    printf("Digite um número inteiro: ");
    scanf("%i", &n1);
    printf("Digite outro número inteiro: ");
    scanf("%i", &n2);
    if(n1 > n2){
        printf("%i é o maior número com diferença de %i\n", n1, (n1-n2));
    }else{
        printf("%i é o maior número com diferença de %i\n", n2, (n2-n1));
    }
    return 0;
}