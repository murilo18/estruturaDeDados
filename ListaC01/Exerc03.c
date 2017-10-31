//Peça ao usuário para digitar três valores inteiros e imprima a soma deles

#include <stdio.h>
#include <stdlib.h>

int q3(){
    int num[3];
    int soma = 0;
    for(int i=1; i<=3; i++){
        printf("Digite o %iº número: ", i);
        scanf("%i", &num[i]);
        soma += num[i];
    }
    printf("A soma dos números é %i\n", soma);
    return 0;
}