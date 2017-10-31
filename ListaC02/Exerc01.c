/* Faca um programa que receba dois números e mostre qual deles é o maior
*/

#include <stdio.h>
#include <stdlib.h>

int q1(){
    int num1, num2;
    printf("Digite um um número inteiro: ");
    scanf("%i", &num1);
    printf("Digite outro número inteiro: ");
    scanf("%i", &num2);
    if(num1 > num2){
        printf("%i é o maior número\n", num1);
    }else{
        printf("%i é o maior número\n", num2);
    }
    return 0;
}