/* A nota final de um estudante é calculada a partir de três notas atribuıdas entre o intervalo
de 0 até 10, respectivamente, a um trabalho de laboratório, a uma avaliacao semestral
e a um exame final. A média das três notas mencionadas anteriormente obedece aos
pesos: Trabalho de Laboratório: 2; Avaliacao Semestral: 3; Exame Final: 5. De acordo
com o resultado, mostre na tela se o aluno está reprovado (média entre 0 e 2,9), de
recuperacao (entre 3 e 4,9) ou se foi aprovado. Faca todas as verificacoes necessárias.
*/

#include <stdio.h>
#include <stdlib.h>

int q14(){
    float n1, n2, n3, soma = 0;
    printf("Digite a nota do trabalho de laboratório: ");
    scanf("%f", &n1);
    printf("Digite a nota da avaliacao semestral: ");
    scanf("%f", &n2);
    printf("Digite a nota do exame final: ");
    scanf("%f", &n3);
    soma = ((n1*2)+(n2*3)+(n3*5))/ 10;
    if(soma <= 2.9){
        printf ("Reprovado com média %.1f\n", soma);
    }else if(soma >=3 && soma <= 4.9){
        printf ("Em recuperação com média %.1f\n", soma);
    }else{
        printf("Aprovado com média %.1f\n", soma);
    } 
    return 0;
}