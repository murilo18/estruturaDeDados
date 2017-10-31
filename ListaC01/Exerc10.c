/* Leia uma velocidade em km/h (quilômetros por hora) e apresente-a convertida em m/s
(metros por segundo). A fórmula de conversão é: M = K/3.6, sendo K a velocidade em
km/h e M em m/s
*/

#include <stdio.h>
#include <stdlib.h>

int q10(){
    float k;
    printf("Digite uma velocidade em km/h: ");
    scanf("%f", &k);
    printf("Em m/s é %.2f\n", k/(3.6));
    return 0;
}