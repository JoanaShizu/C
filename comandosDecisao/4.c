/*. Faça um programa que receba como entrada 3 números inteiros e imprima um (e apenas um) dos
seguintes números:
• 1 (Se todos os números são iguais)
• 2 (Se todos os números são diferentes)
• 3 (Se apenas dois números são iguais)
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int x, y, z;

    printf("Informe o valor de 3 números: ");
    scanf("%i%i%i", &x, &y, &z);

    if(x==y && y==z){
        printf("1");
    }
        

    else if (x != y && y != z && x != z){
        printf("2");
    }
    else{
        printf("3");
    }
}