/* Faça um programa que receba como entrada 3 números reais maiores que zero correspondendo
ao comprimento dos lados do triângulo, em seguida, classifique-o em:
1. equilátero (os três lados de comprimentos iguais)
2. isósceles (dois lados de comprimentos iguais) ou
3. escaleno (os três lados de comprimentos diferentes)
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    float l1, l2, l3;

    printf("Informe os três lados do triângulo: ");
    scanf("%i%i%i", &l1, &l2, &l3);

    if (l1 == l2 && l2 == l3){
        printf("Triângulo equilátero");
    }
    else if ((l1==l2 && (l1,l2)!=l3) ^ (l1==l3 && (l1,l3)!=l2) ^ (l2==l3 && (l2,l3)!=l1)){
        printf("Triângulo isóceles");
    }
    else{
        printf("Triângulo escaleno");
    }
    return 0;    
}