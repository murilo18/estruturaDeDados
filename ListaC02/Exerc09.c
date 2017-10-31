/*Leia o salário de um trabalhador e o valor da prestac¸˜ ao de um empréstimo. Se a
prestac¸˜ ao for maior que 20% do salário imprima: Empréstimo n~ ao concedido, caso
contrário imprima: Empréstimo concedido
 */

#include <stdio.h>
#include <stdlib.h>

int q9(){
    float sa, em;
    printf("Digite o salário do trabalhador: ");
    scanf("%f", &sa);
    printf("Digite o valor do empréstimo: ");
    scanf("%f", &em);
    if(em <= (sa*0.20)){
        printf("Empréstimo concedido\n");
    }else{
        printf("Empréstimo não concedido\n");
    }
    return 0;
} 
