/* Fac¸a um programa que leia 2 notas de um aluno, verifique se as notas s˜ ao válidas e
exiba na tela a média destas notas. Uma nota válida deve ser, obrigatoriamente, um
valor entre 0.0 e 10.0, onde caso a nota n˜ ao possua um valor válido, este fato deve ser
informado ao usuário e o programa termina
 */

#include <stdio.h>
#include <stdlib.h>

int q8(){
    float n1, n2;
    printf("Digite a nota do aluno: ");
    scanf("%f", &n1);
    printf("Digite outra nota: ");
    scanf("%f", &n2);
    if((n1>=0 && n1<=10) && (n2>=0 && n2<=10)){
        printf("A média é %.1f\n", (n1+n2)/2);
    }else{
        printf("Nota(s) inválida(s)!\n");
    }
    return 0;
}