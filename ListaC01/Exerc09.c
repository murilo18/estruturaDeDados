/*
Leia uma temperatura em graus Celsius e apresente-a convertida em graus Kelvin. A
fórmula de convers˜ ao é: K = C + 273.15, sendo C a temperatura em Celsius e K a
temperatura em Kelvin
*/

#include <stdio.h>
#include <stdlib.h>

int q9(){
    float c;
    printf("Digite uma temperatura em Celsius: ");
    scanf("%f", &c);
    printf("Convertida em Kelvin é %.2f\n", c+(273.15)); 
    return;
}