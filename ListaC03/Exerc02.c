/* Escreva um programa que escreva na tela, de 1 até 100, de 1 em 1, 3 vezes. A primeira
vez deve usar a estrutura de repeticao for, a segunda while, e a terceira do while
*/

#include <stdio.h>
#include <stdlib.h>

int q2(){
    printf(">>De 1 até 100 com for<< ");
    for(int i = 1; i <= 100; i++){
        printf("%i ", i);
    }
    printf("\n");
    printf("\n");
    ////////////////////////////////////////
    printf(">>De 1 até 100 com while<< ");
    int cont = 1;
    while(cont <= 100){
        printf("%i ", cont);
        cont++; 
    }
    printf("\n");
    printf("\n");
    /////////////////////////////////////////
    printf(">>De 1 até 100 com do while<< ");
    int cont2 = 1;
    do{
        printf("%i ", cont2);
        cont2++;
    }while(cont2 != 101);
    printf("\n");
    /////////////////////////////////////////
    return 0;
}