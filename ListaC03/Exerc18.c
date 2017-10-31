/* Faca um programa que calcule a �rea de um tri�ngulo, cuja base e altura sao fornecidas
pelo usu�rio. Esse programa nao pode permitir a entrada de dados inv�lidos, ou seja,
medidas menores ou iguais a 0.*/

#include <stdio.h>
#include <stdlib.h>

int q18(){
	float a, b, c;
	while(a <= 0 || b <= 0){
		printf("Base: ");
		scanf("%f", &a);
		printf("Altura: ");
		scanf("%f", &b);
		if(a <= 0 || b <= 0){
			printf("Dados invalidos\n\n");
		}
	}
	c = (a * b) / 2;
	printf("Resultado: %.2f", c);
	
	return 0;
}
