/* Faca um programa que calcule e mostre a área de um trapézio. Sabe-se que:
A = (basemaior + basemenor) ∗ altura / 2
Lembre-se a base maior e a base menor devem ser números maiores que zero.
*/

#include <stdio.h>
#include <stdlib.h>
        
int q17(){
    float bmai, bmen, alt;
    printf("Digite a Base maior do trapézio: ");
    scanf("%f", &bmai);
    printf("Digite a Base menor do trapézio: ");
    scanf("%f", &bmen);
    printf("Digite a altura do trapézio: ");
    scanf("%f", &alt);
    printf("A área do trapézio é %.1f\n", ((bmai+bmen)*alt)/2);
    return 0;
}