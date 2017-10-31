/* Leia um valor de comprimento em centimetros e apresente-o convertido em polegadas.
A fórmula de conversao é: P=C/2,54 , sendo C o comprimento em centimetros e P o
comprimento em polegadas
*/

#include <stdio.h>
#include <stdlib.h>

int q17(){
    printf("Digite um comprimento em centímetros: ");
    float c;
    scanf("%f", &c);
    printf("Em polegadas é %.2f\n", c/2.54);
    return 0;
}