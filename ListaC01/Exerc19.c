/* Leia um valor de volume em litros e apresente-o convertido em metros cúbicos m³ . A
fórmula de conversao é: M =L/1000 , sendo L o volume em litros e M o volume em metros
cúbicos
*/

#include <stdio.h>
#include <stdlib.h>

int q19(){
    printf("Digite um valor em litros: ");
    float litro;
    scanf("%f", &litro);
    printf("Convertido em metros cúbicos é %f\n", litro/1000);
    return 0;
}