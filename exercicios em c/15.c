/*Implemente uma função que some todos os elementos de um array, recebendo um ponteiro como
parâmetro.*/

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
