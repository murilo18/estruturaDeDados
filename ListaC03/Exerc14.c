/*Faca um programa que leia um número inteiro positivo par N e imprima todos os números
pares de 0 até N em ordem decrescente.*/

#include <stdio.h>
#include <stdlib.h>

int q14(){
	int num, cont = 0;
    printf("Digite um numero inteiro positivo par: ");
    scanf("%i", &num);
    printf("Numeros pares de 0 ate %i:\n", num);
    for(cont = num; cont >= 0; cont--){
    	printf("%i... ", cont);
	}	
	return 0;
}
