/* Leia uma velocidade em m/s (metros por segundo) e apresente-a convertida em km/h
(quilômetros por hora). A fórmula de convers˜ ao é: K = M ∗ 3.6, sendo K a velocidade
em km/h e M em m/s
*/

#include <stdio.h>
#include <stdlib.h>

int q11(){
    printf("Digite uma velocidade em m/s: ");
    float m;
    scanf("%f", &m);
    printf("Convertida em km/h é %.2f\n", m*3.6);
    return 0;
}