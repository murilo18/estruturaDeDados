/*Dados três valores, A, B, C, verificar se eles podem ser valores dos lados de um triângulo
e, se forem, se é um triângulo escaleno, equilátero ou isóscele, considerando os seguin-
tes conceitos:
• O comprimento de cada lado de um triângulo é menor do que a soma dos outros
dois lados.
• Chama-se equilátero o triângulo que tem três lados iguais.
• Denominam-se isósceles o triângulo que tem o comprimento de dois lados iguais.
• Recebe o nome de escaleno o triângulo que tem os três lados diferentes.
 */

#include <stdio.h>
#include <stdlib.h>
        
int q20(){
    float l1, l2, l3;
    printf("Defina o 1º lado do triângulo: ");
    scanf("%f", &l1);
    printf("Defina o 2º lado do triângulo: ");
    scanf("%f", &l2);
    printf("Defina o 3º lado do triângulo: ");
    scanf("%f", &l3);
    if((l1 < l2+l3) && (l2 < l1+l3) && (l3 < l1+l2)){
        if(l1 == l2 && l2 == l3 && l3 == l1){
            printf("Triângulo equilátero\n");
        }else if(l1 != l2 && l2 != l3 && l3 != l1){
            printf("Triângulo escaleno\n");
        }else {
            printf("Triângulo isósceles\n");
        }    
    }else{
        printf("Triâgulo inválido!\n");
    }
    return 0;
}