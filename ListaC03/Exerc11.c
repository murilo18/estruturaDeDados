/*Faca um programa que leia um número inteiro positivo N e imprima todos os números
naturais de 0 até N em ordem crescente*/
#include <stdio.h>
#include <stdlib.h>

int q11(){
    int numero = 0;
    printf("Digite um numero inteiro positivo: ");
    scanf("%i", &numero);
    printf("Numeros naturais de 0 a %i\n", numero);
    int i; // a vari�vel 'i' foi declarada s� pode ser feito no padr�o c99 e no padr�o c11
    for(i = 0; i < numero; i++){
        printf("%i\n", i);
    }
    return 0;
}
