/* Faca um programa que receba dois números e mostre o maior. Se por acaso, os dois
números forem iguais, imprima a mensagem Números iguais
*/

#include <stdio.h>
#include <stdlib.h>

int q7(){
    int n1, n2;
    printf("Digite um número inteiro: ");
    scanf("%i", &n1);
    printf("Digite outro número inteiro: ");
    scanf("%i", &n2);
    if(n1 > n2){
        printf("%i é o maior número\n", n1);
    }else if(n1 == n2 ){
        printf("Números iguais!\n");
    }else{
        printf("%i é o maior número\n", n2);
    }
    return 0;
}