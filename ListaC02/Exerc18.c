/* Faca um programa que mostre ao usuário um menu com 4 opcoes de operacoes ma-
temáticas (as básicas, por exemplo). O usuário escolhe uma das opcoes e o seu pro-
grama entao pede dois valores numéricos e realiza a operacao, mostrando o resultado e
saindo
*/

#include <stdio.h>
#include <stdlib.h>
        
int q18(){
    int num;
    printf("=================\n");
    printf("1 - Soma\n");
    printf("2 - Subtraçao\n");
    printf("3 - Multiplicação\n");
    printf("4 - Divisão\n");
    printf("=================\n");
    printf("Escolha com o número da operação: ");
    scanf("%i", &num);
    switch(num){
        case 1 :
            soma();
        break;
        case 2 :
            subtracao();
        break;
        case 3 :
            multiplicacao();
        break;
        case 4 :
            divisao();
        break;
        default :
            printf("Número inválido!\n");
    }    
    return 0;
}
int soma(){
    float n1, n2;
    printf("Digite o 1º número: ");
    scanf("%f", &n1);
    printf("Digite o 2º número: ");
    scanf("%f", &n2);
    printf("Resultado da soma: %.2f\n", n1+n2);
    return 0;
}
int subtracao(){
    float n1, n2;
    printf("Digite o 1º número:");
    scanf("%f", &n1);
    printf("Digite o 2º número: ");
    scanf("%f", &n2);
    printf("Resultado da subtração: %.2f\n", n1-n2);
    return 0;
}
int multiplicacao(){
    float n1, n2;
    printf("Digite o 1º número: ");
    scanf("%f", &n1);
    printf("Digite o 2º número: ");
    scanf("%f", &n2);
    printf("Resultado da multiplicação: %.2f\n", n1*n2);
    return 0;
}
int divisao(){
    float n1, n2;
    printf("Digite o dividendo: ");
    scanf("%f", &n1);
    printf("Digite o divisor: ");
    scanf("%f", &n2);
    printf("Resultado da divisão: %.2f\n", n1/n2);
    return 0;
}