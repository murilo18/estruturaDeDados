/*Faca um programa para verificar se um determinado número inteiro e divisıvel por 3 ou
5, mas nao simultaneamente pelos dois.
 */

#include <stdio.h>
#include <stdlib.h>
        
int q19(){
    printf("Digite um número inteiro: ");
    int num;
    scanf("%i", &num);
    if(num % 3 == 0 && num % 5 != 0){
        printf("Divisível por 3\n");
    }else if(num % 5 == 0 && num % 3 != 0){
        printf("Divisível por 5\n");
    }else if(num % 3 == 0 && num % 5 == 0){
        printf("Divisível por 3 e por 5\n");
    }else{
        printf("Não é divisível nem por 3 e por 5\n");
    }
    return 0;
}