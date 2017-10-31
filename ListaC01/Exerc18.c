/* Leia um valor de volume em metros cúbicos m³ e apresente-o convertido em litros. A
fórmula de conversao é: L = 1000 ∗ M, sendo L o volume em litros e M o volume em
metros cúbicos
*/

#include <stdio.h>
#include <stdlib.h>

int q18(){
    printf("Digite o volume em m³: ");
    float mc;
    scanf ("%f", &mc);
    printf("Convertido em litros é %.2f\n", 1000*mc);
    return 0;
}