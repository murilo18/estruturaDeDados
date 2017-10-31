/* Faca um programa que simula o lancamento de dois dados, d1 e d2, n vezes, e tem como
saida o número de cada dado e a relac¸˜ ao entre eles (>,<,=) de cada lancamento.*/

#include <stdio.h>
#include <stdlib.h>

int q17(){
	int cont, d1[10], d2[10];
	for(cont = 1; cont <= 10; cont++){
		d1[cont] = rand()%10;
		d2[cont] = rand()%10;	
	}
	
	for(cont = 1; cont <= 10; cont++){
	
		if(d1[cont] > d2[cont]){
			printf("%i > %i\n", d1[cont], d2[cont]);
		}else{
			if(d1[cont] < d2[cont]){
				printf("%i < %i\n", d1[cont], d2[cont]);
			}
			else{
				printf("%i == %i\n", d1[cont], d2[cont]);
			}
		}
	}	
}
