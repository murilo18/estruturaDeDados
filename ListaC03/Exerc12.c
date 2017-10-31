/*Faca um programa que leia um número inteiro positivo N e imprima todos os números
naturais de 0 até N em ordem decrescente.*/

#include <stdio.h>
#include <stdlib.h>

int main(){
	int numero = 0;
	printf("Digite um numero inteiro positivo: ");
	scanf("%i", &numero);
	printf("Numeros naturais de %i ate 0: ", numero);
	while(numero >= 0){
		printf("\n%i\n", numero);
		numero--;
	}
	return 0;
}
