/* Leia um valor de massa em quilogramas e apresente-o convertido em libras. A fórmula
de conversao é: L =K/0,45 , sendo K a massa em quilogramas e L a massa em libras
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
   printf("Digite um valor em KG: ");
   float kg;
   scanf("%f", &kg);
   printf("Convertido em Libras é %.2f\n", kg/0.45);
   return 0;
}