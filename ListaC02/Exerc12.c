/* ler um número inteiro. Se o número lido for negativo, escreva a mensagem “Número
inválido”. Se o número for positivo, calcular o logaritmo deste numero
 */

#include <stdio.h>
#include <stdlib.h>

int q12(){
    printf("Digite um número inteiro: ");
    int num;
    scanf("%i", &num);
    if(num >= 0){
        printf("Seu logaritmo é %.2f\n", log(num));
    }else{
        printf("Número inválido!");
    }
    return 0;
}