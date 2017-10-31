/* Faca um algoritmo que calcule a média ponderada das notas de 3 provas. A primeira e
a segunda prova têm peso 1 e a terceira tem peso 2. Ao final, mostrar a média do aluno
e indicar se o aluno foi aprovado ou reprovado. A nota para aprovacao deve ser igual ou
superior a 60 pontos
 */

#include <stdio.h>
#include <stdlib.h>

int q13(){
    float n1, n2, n3, soma = 0;
    printf("Digite a 1ª nota: ");
    scanf("%f", &n1);
    printf("Digite a 2ª nota: ");
    scanf("%f", &n2);
    printf("Digite a 3ª nota: ");
    scanf("%f", &n3);
    soma = (n1*1)+(n2*1)+(n3*2)/4; 
    if(soma >= 60){
        printf("Aluno aprovado com média %.2f\n", soma);
    }else{
        printf("Aluno reprovado com média %.2f\n", soma);
    }
    return 0;
}