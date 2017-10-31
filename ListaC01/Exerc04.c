//Leia um número real e imprima o resultado do quadrado desse número

#include <stdio.h>
#include <stdlib.h>

int q4(){
    float num;
    printf("Digite um número real: ");
    scanf("%f", &num);
    printf("%f ao quadrado é %.2f\n", num, pow(num, 2));
    return 0;
}