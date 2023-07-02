/*Uma loja fornece 5% de desconto para funcionários e 10% de desconto para clientes especiais.
Faça um programa que calcule o valor total a ser pago por uma pessoa em uma compra. O programa
deve ler o valor total da compra efetuada e um código que identifique se o comprador é um cliente
comum ou um dos dois tipos de clientes que recebem desconto. No final, o programa deve informar
o valor a pagar e o desconto que foi dado, se for o caso.*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    float valorDaCompra;

    printf("Informe o valor da compra: ");
    scanf("%f", &valorDaCompra);

    int tipo;
    printf("Informe uma das opções: \nDigite 1: Cliente comum\nDigite 2: Cliente especial\nDigite 3: Funcionário\n");
    scanf("%i", &tipo);
    if (tipo == 1){
        printf("Valor a pagar R$ %.2f\n", valorDaCompra);
        printf("Não houve desconto");
    }
    else if (tipo == 2)
    {
        valorDaCompra -= (valorDaCompra * 10)/ 100;
        printf("Valor a pagar R$ %.2f\n", valorDaCompra);
        printf("Desconto de 10 por cento");
    }
    else
    {
        valorDaCompra -= (valorDaCompra * 5)/ 100;
        printf("Valor a pagar R$ %.2f\n", valorDaCompra);
        printf("Desconto de 5 por cento");
    }
    
    return 0;
}