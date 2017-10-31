/* Leia um valor de comprimento em polegadas e apresente-o convertido em centímetros.
A fórmula de conversão é: C = P ∗ 2,54, sendo C o comprimento em centímetros e P o
comprimento em polegadas
*/

#include <stdio.h>
#include <stdlib.h>

int q16(){
    printf("Digite um comprimento em polegadas: ");
    float p;
    scanf("%f", &p);
    printf("Convertido em Centímetros é %.2f\n", p*2.54);
    return 0;
}