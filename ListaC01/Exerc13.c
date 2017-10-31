/* Leia uma distância em quilômetros e apresente-a convertida em milhas. A fórmula de
conversão é: M = K/1,61 , sendo K a distância em quilômetros e M em milhas
*/

#include <stdio.h>
#include <stdlib.h>

int q13(){
    printf("Digite uma distância em quilômetros: ");
    float q;
    scanf("%f", &q);
    printf("Convertido em milhas é %.2f\n", q/1.61);
    return 0;
}