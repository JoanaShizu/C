/* Implemente uma função achar( ) que receba um vetor de inteiros e mostra o maior e o
menor elemento. Não imprima os valores na função achar( ) e sim na main( ).*/

#include <stdio.h>

void achar(int *vetor, int tamanho, int *maximo, int *minimo) {
    int i;

    *maximo = *minimo = vetor[0];

    for (i = 1; i < tamanho; i++) {
        if (vetor[i] > *maximo) {
            *maximo = vetor[i];
        }

        if (vetor[i] < *minimo) {
            *minimo = vetor[i];
        }
    }
}

int main() {
    int vetor[] = {10, 5, 8, 12, 3};
    int tamanho = 5;
    int maximo, minimo;

    achar(vetor, tamanho, &maximo, &minimo);

    printf("Maior elemento: %i\n", maximo);
    printf("Menor elemento: %i\n", minimo);

    return 0;
}
