/* Leia um numero real. Se o número for positivo imprima a raiz quadrada. Do contrário,
imprima o numero ao quadrado
*/

#include <stdio.h>
#include <stdlib.h>

int q3(){
    printf("Digite um número real: ");
    float num;
    scanf("%f", &num);
    if(num >=0){
        printf("Sua raiz quadrada é %.2f\n", sqrt(num));
    }else{
        printf("Elevado ao quadrado é %.2f\n", pow(num, 2));
    }
    return 0;
}