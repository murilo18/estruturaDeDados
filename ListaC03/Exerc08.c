/*Escreva um programa que leia 10 números e escreva o menor valor lido e o maior valor
lido
*/

#include <stdio.h>
#include <stdlib.h>

int q8(){
    float maior, menor, numero[10];
    for(int i=0; i < 10; i++){
        printf("Digite o %iº valor: ", i+1);
        scanf("%f", &numero[i]);
    }
    for(int i=0; i < 9; i++){
        for(int j=1; i < 10; i++){
            if(numero[i] > numero[j]){
                maior = numero[i];
            }else if(numero[i] < numero[j]){
                menor = numero[i];
            }
        }
    }
    printf("Maior número: %.1f\nMenor número: %.1f\n", maior, menor);
    return 0;
}