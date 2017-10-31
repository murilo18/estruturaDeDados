/*Escreva um algoritmo que leia certa quantidade de números e imprima o maior deles e
quantas vezes o maior número foi lido. A quantidade de números a serem lidos deve ser
fornecida pelo usuário.*/

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
