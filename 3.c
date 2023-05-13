/*. Faça um programa que receba a categoria e o percurso em quilômetros, calcule e mostre
o consumo estimado de combustível do carro. Existem as categorias “a” que faz 15 km/l,
“b” que faz 12 km/l e “c” que faz 10 km/l. Todos abastecidos com gasolina.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    char categoria;
    float percurso, consumo;

    printf("Digite a categoria do carro a, b ou c:\n");
    scanf("%c", &categoria);
    printf("Digite o percurso em KM:");
    scanf("%f", &percurso);

    switch (categoria){
    case 'a':
        consumo = percurso / 15;
        printf("o consumo estimado é de: %.2f litros", consumo);
        break;
    case 'b':
        consumo = percurso/12;
        printf("o consumo estimado é de: %.2f litros", consumo);
        break;
    case 'c':
        consumo = percurso/10;
        printf("o consumo estimado é de: %.2f litros", consumo);
        break;
    }
}