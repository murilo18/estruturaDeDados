/*
Leia um ângulo em graus e apresente-o convertido em radianos. A fórmula de convers˜ ao
é: R = G ∗ π/180, sendo G o ângulo em graus e R em radianos e π = 3.14
*/

#include <stdio.h>
#include <stdlib.h>

int q14(){
    printf("Digite um ângulo em graus: ");
    float g;
    scanf("%f", &g);
    printf("Convertido em radianos é %.2f\n", g*(3.14/180));
    return 0;
}