/* Usando switch, escreva um programa que leia um inteiro entre 1 e 7 e imprima o dia
da semana correspondente a este numero. Isto é, domingo se 1, segunda-feira se 2, e
assim por diante
 */

#include <stdio.h>
#include <stdlib.h>

int q15(){
    printf("Digite um número entre 1 e 7: ");
    int dia;
    scanf("%i", &dia);
    switch(dia){
        case 1 : 
            printf("Domingo\n");
        break;
        case 2 : 
            printf("Segunda\n"); 
        break;
        case 3 : 
            printf("Terça\n");
        break;
        case 4 : 
            printf("Quarta\n");
        break;
        case 5 :
            printf("Quinta\n");
        break;
        case 6 :
            printf("Sexta\n");
        break;
        case 7 :
            printf("Sábado\n");
        break;
        default :
            printf("Dia inválido!\n");
    return 0; 
    }
}