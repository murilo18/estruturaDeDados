//Leia um número real e imprima a quinta parte deste número

#include <stdio.h>
#include <stdlib.h>

int q5(){
    float num;
    printf("Digite um número real: ");
    scanf("%f", &num);
    printf("Sua 5ª parte é %.2f\n", num/5);
    return 0;
}