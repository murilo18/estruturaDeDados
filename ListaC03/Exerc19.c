/* Elabore um programa que faca leitura de vários números inteiros, até que se digite um
número negativo. O programa tem que retornar o maior e o menor número lido.*/

#include <stdio.h>
#include <stdlib.h>

int q19(){
	int cont, maior = 0, menor = 100, vetor[15];
	for(cont = 1; cont <= 15; cont++){
		printf("%io numero: ", cont);
		scanf("%i", &vetor[cont]);
		if(vetor[cont] < 0){
			break;
		}
		if(vetor[cont] > maior){
			maior = vetor[cont];
		}
		if(vetor[cont] < menor){
			menor = vetor[cont];
		}	
	}
	printf("maior: %i | menor: %i\n", maior, menor);
	return 0;
}
