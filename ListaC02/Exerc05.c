/* Faca um programa que receba um número inteiro e verifique se este número é par ou
ımpar
 */

#include <stdio.h>
#include <stdlib.h>

int q5(){
    printf("Digite um número inteiro: ");
    int num;
    scanf("%i", &num);
    if(num % 2 == 0){
        printf("É par\n");
    }else{
        printf("É ímpar\n");
    }
    return 0;
}