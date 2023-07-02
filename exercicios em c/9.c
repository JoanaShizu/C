/*Faça um programa para verificar se um número é primo ou não.*/

#include <stdio.h>

int isPrime(int num) {
    int i;
    
    if (num <= 1) {
        return 0;  // Números menores ou iguais a 1 não são primos
    }
    
    for (i = 2; i < num; i++) {
        if (num % i == 0) {
            return 0;  // Se o número for divisível por algum número além de 1 e ele próprio, não é primo
        }
    }
    
    return 1;  // Se não foi encontrado nenhum divisor, o número é primo
}

int main() {
    int num;
    
    printf("Digite um número inteiro positivo: ");
    scanf("%i", &num);
    
    if (isPrime(num)) {
        printf("%i é um número primo.\n", num);
    } else {
        printf("%i não é um número primo.\n", num);
    }
    
    return 0;
}
