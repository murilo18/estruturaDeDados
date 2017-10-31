/*Leia uma temperatura em graus Celsius e apresente-a convertida em graus Fahrenheit.
A fórmula de conversão é: F = C∗(9.0/5.0)+32.0, sendo F a temperatura em Fahrenheit
e C a temperatura em Celsius
*/

#include <stdio.h>
#include <stdlib.h>

int q6(){
    float c = 0;
    //float f = c∗(9/5)+32;
    printf("Digite um temperatura em Celsius: ");
    scanf("%f", &c);
    printf("Convertida em Fahrenheit é %.2f\n", c*(9/5)+32);
    return 0;
}