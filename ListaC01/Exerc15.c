/*  Leia um ângulo em radianos e apresente-o convertido em graus. A fórmula de convers˜ ao
é: G = R ∗ 180/π, sendo G o ângulo em graus e R em radianos e π = 3.14 
*/

#include <stdio.h>
#include <stdlib.h>

int q15(){
    printf("Digite um ângulo em radianos: ");
    float r;
    scanf("%f", &r);
    printf("Convertido em graus é %.2f\n", r*(180/3.14)); 
    return 0;
}