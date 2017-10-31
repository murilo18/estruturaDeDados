/*Faca um programa que leia um conjunto nao determinado de valores, um de cada vez, e
escreva para cada um dos valores lidos, o quadrado, o cubo e a raiz quadrada. Finalize
a entrada de dados com um valor negativo ou zero.*/

#include <stdio.h>
#include <stdlib.h>

int q20(){
	int vetor[15], cont;
	for(cont = 1; cont <= 15; cont++){
		printf("%o numero: ", cont);
		scanf("%i", &vetor[cont]);
		if(vetor[cont] < 0){
			break;
		}
		printf("Ao quadrado: %.2f | Ao cubo: %.2f | Raiz Quadrada: %.2f\n", pow(vetor[cont], 2), pow(vetor[cont], 3), sqrt(vetor[cont]));
	}	
	return 0;
}
