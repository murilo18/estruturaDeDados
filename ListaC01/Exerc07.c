/* Leia uma temperatura em graus Fahrenheit e apresente-a convertida em graus Celsius.
A fórmula de convers˜ ao é: C = 5.0 ∗ (F − 32.0)/9.0, sendo C a temperatura em Celsius
e F a temperatura em Fahrenheit
*/

#include <stdio.h>
#include <stdlib.h>

int q7(){
    float f;
    printf("Digite a temperatura em Fahrenheit: ");
    scanf("%f", &f);
    printf("Converida em Celsius é: %f\n", 5*(f-32)/9); 
    return 0;
} 