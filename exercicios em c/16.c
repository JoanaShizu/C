/*Suponha que você precise reajustar em 8% todos os produtos de um determinado catálogo. Faça
um programa usando ponteiro que receba o preço de 5 produtos e armazene em um array. Depois,
atualize o preço de todos os produtos e mostre na tela.*/

#include <stdio.h>

int somarArray(int *array, int tamanho) {
    int soma = 0;
    int i;

    for (i = 0; i < tamanho; i++) {
        soma += array[i];
    }

    return soma;
}

int main() {
    int array[] = {1, 2, 3, 4, 5};
    int tamanho = 5; 

    int resultado = somarArray(array, tamanho);

    printf("A soma dos elementos do array é: %i\n", resultado);

    return 0;
}
