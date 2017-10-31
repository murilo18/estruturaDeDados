/* Leia uma distância em milhas e apresente-a convertida em quilômetros. A fórmula de
conversão é: K = 1,61 ∗ M, sendo K a distância em quilômetros e M em milhas
*/

#include <stdio.h>
#include <stdlib.h>

int q12(){
    printf("Digite uma distancia em milhas: ");
    float m;
    scanf("%f", &m);
    printf("Convertida em quilômetros é %.2f\n", 1.61*m);
    return 0;
}