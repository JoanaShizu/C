/*Uma locadora de veículos lançou uma promoção para este mês: pagando R$ 90 por diária, o
cliente pode alugar um carro de passeio. Para cada diária, o cliente recebe uma cota de
quilometragem de 100 km. Cada quilômetro a mais custará uma taxa extra de R$ 12. Faça um
programa que receba como entrada a quantidade de dias e a quilometragem total rodada por um
cliente da locadora e exiba o valor total a ser pago.*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int dias;
    int km;

    printf("Informe o total de dias: ");
    scanf("%i", &dias);

    printf("Informe a kilometragem total rodada: ");
    scanf("%i", &km);

    int aMais;
    int valorAMais;
    int total;
    if (dias*100 < km){
        aMais = km - dias*100;
        valorAMais = aMais * 12;
        total = valorAMais + (dias * 90);
        printf("Total a pagar: %i", total);
    }
    else{
        total = dias * 90;
        printf("Total a pagar: %i", total);
    }
    
    
}

