/* Leia uma temperatura em graus Kelvin e apresente-a convertida em graus Celsius. A
fórmula de conversão é: C = K − 273.15, sendo C a temperatura em Celsius e K a
temperatura em Kelvin.
*/

#include <stdio.h>
#include <stdlib.h>

int q8(){
    float k;
    printf("Digite a temperatura em Kelvin: ");
    scanf("%f", &k);
    printf("Converida em Celsius é: %.2f\n", k-(273.15));
    return 0;
}