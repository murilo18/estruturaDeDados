/* Leia um número fornecido pelo usuário. Se esse número for positivo, calcule a raiz
quadrada do número. Se o número for negativo, mostre uma mensagem dizendo que o
número é inválido
*/

#include <stdlib.h>
#include <stdio.h>

int q2(){
    printf("Digite um número inteiro: ");
    int num;
    scanf("%i", &num);
    if(num >= 0){
        printf("Sua raiz quadrada é %.2f\n", sqrt(num));
    }else{
        printf("Número inválido!\n");
    }
    return 0;
}