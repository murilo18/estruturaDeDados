/* Faca um programa que leia um número e, caso ele seja positivo, calcule e mostre:
• O número digitado ao quadrado
• A raiz quadrada do número digitado
*/

#include <stdio.h>
#include <stdlib.h>

int q4(){
    printf("Digite um número inteiro: ");
    int num;
    scanf("%i", &num);
    if(num>=0){
        printf("Ao quadrado: %.2f\nRaiz quadrada: %f\n", pow(num, 2), sqrt(num));
    }
    return 0;
}