/*Faça um programa que leia três números inteiros e os imprima em ordem decrescente.*/

#include <stdio.h>

void trocar(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int num1, num2, num3;

    printf("Digite o primeiro número: ");
    scanf("%i", &num1);

    printf("Digite o segundo número: ");
    scanf("%i", &num2);

    printf("Digite o terceiro número: ");
    scanf("%i", &num3);

    // Ordenando os números em ordem decrescente
    if (num1 < num2) {
        trocar(&num1, &num2);
    }
    if (num1 < num3) {
        trocar(&num1, &num3);
    }
    if (num2 < num3) {
        trocar(&num2, &num3);
    }

    printf("Os números em ordem decrescente são: %i, %i, %i\n", num1, num2, num3);

    return 0;
}
