/*Escreva um algoritmo que leia certa quantidade de n�meros e imprima o maior deles e
quantas vezes o maior n�mero foi lido. A quantidade de n�meros a serem lidos deve ser
fornecida pelo usu�rio.*/

#include <stdio.h>
#include <stdlib.h>

int q15(){
	int i = 0, nums[10], maior = 0, repete = 0;
	
	for(i = 1; i <= 10; i++){
		printf("%io Numero: ", i);
		scanf("%i", &nums[i]);
	}
	
	for(i = 1; i <= 10; i++){
		if(nums[i] >= maior){
			maior = nums[i];	
		}
	}
	for(i = 1; i <= 10; i++){
		if(nums[i] == maior){
			repete += 1;
		}
	}
	
	printf("Maior numero: %i e ele repetiu %i vezes\n", maior, repete);
	
	return 0;
}
