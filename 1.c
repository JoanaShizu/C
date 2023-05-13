/*Nos parques de diversão, alguns brinquedos tem idade e altura mínimas para poder andar neles. 
Em dado parque com 3 brinquedos temos a seguinte limitação:
• Barca Viking: 1,5m de altura e 12 anos.
• Elevator of Death: 1,4m de altura e 14 anos.
• Final Killer: 1,7m de altura ou 16 anos.
Faça um programa que receba a altura e a idade de uma pessoa, identifique quantos brinquedos ele
pode andar*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int idade;
    float altura;

    printf("Informe a sua idade: ");
    scanf("%i", &idade);
    printf("Informe a sua altura: ");
    scanf("%f", &altura);
    
    int count = 0;

    if (idade >= 12 && altura >= 150){
        count++;
    }
    if (idade >= 14 && altura >= 140){
        count++;
    }
    if (idade >= 16 || altura >= 170)
    {
        count++;
    }

    printf("A pessoa pode ir em %i brinquedo(s)", count);
    return 0;
}