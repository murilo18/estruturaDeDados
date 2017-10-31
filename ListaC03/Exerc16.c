/* Faca um programa que calcule e escreva o valor de S
S = 1/1+3/2+5/3+7/4 ... 99/50 */

#include <stdio.h>
#include <stdlib.h>

int q16(){
	int a, cont, resul;
	for(cont = 1; cont < 100; cont++){		
		if(cont % 2 != 0){
			a+=1;
			resul += (cont/a);		
		}
	}
	printf("resultado: %i", resul);
}
