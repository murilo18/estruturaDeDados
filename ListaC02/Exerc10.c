/* Fac¸a um programa que receba a altura e o sexo de uma pessoa e calcule e mostre seu
peso ideal, utilizando as seguintes fórmulas (onde h corresponde à altura):
• Homens: (72.7 ∗ h) − 58
• Mulheres: (62,1 ∗ h) − 44,7
 */

#include <stdio.h>
#include <stdlib.h>

int q10(){
    float alt;
    int sex;
    printf("Altura: ");
    scanf("%f", &alt);
    printf("Sexo [1 para masculino e 2 para ferminino]: ");
    scanf("%i", &sex);
    if(sex == 1){
        printf("Peso ideal: %.2f\n", ((72.7 * alt) - 58));
    }else if(sex == 2){
        printf("Peso ideal: %.2f\n", ((62.1 * alt)- 44.7));
    }else{
        printf ("Sexo invalido!");
    }
    return 0;
}