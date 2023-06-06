/*. Uma mercearia contém apenas 4 itens, cujos preços são dados abaixo:
• Código: 1; Preço: 5,30
• Código: 2; Preço: 6,00
• Código: 3; Preço: 3,20
• Código: 4; Preço: 2,50
A mercearia decidiu dar descontos aos seus clientes. A regra de desconto é bem simples: se a
quantidade de produtos comprados for igual ou maior que quinze, então o desconto é concedido. O
desconto também é concedido caso o valor total da compra seja maior ou igual a 40 reais. O valor
do desconto é de 15%.
Faça um programa que leia o código do produto, a quantidade comprada e imprima o valor que o
cliente deve pagar, já considerando o desconto quando aplicável. Considere que o cliente só pode
comprar um único tipo produto cada vez.*/

#include <stdio.h>

int main() {
    int codigo, quantidade;
    float precos[] = {5.30, 6.00, 3.20, 2.50};
    float total = 0.0;
    char opcao;

    printf("\tMenu:\n• Código: 1; Preço: 5,30\n• Código: 2; Preço: 6,00\n• Código: 3; Preço: 3,20\n• Código: 4; Preço: 2,50\n\n");
    do {
        printf("Digite o código do produto: ");
        scanf("%i", &codigo);

        printf("Digite a quantidade comprada: ");
        scanf("%i", &quantidade);

        if (codigo < 1 || codigo > 4) {
            printf("Código de produto inválido!\n");
            continue;
        }

        total += precos[codigo - 1] * quantidade;

        printf("Deseja comprar mais itens? (S/N): ");
        scanf(" %c", &opcao);
    } while (opcao == 'S' || opcao == 's');

    float desconto = 0.0;
    if (total >= 40 || quantidade >= 15) {
        desconto = 0.15 * total;
    }

    float valorFinal = total - desconto;

    printf("Valor total a pagar: R$ %.2f\n", total);
    printf("Desconto: R$ %.2f\n", desconto);
    printf("Valor final a pagar: R$ %.2f\n", valorFinal);

    return 0;
}
