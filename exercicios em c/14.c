#include <stdio.h>
#include <string.h>

int contaOcorrencia(char str[], char caractere){
    int count = 0;
    int i;

    for ( i = 0; str[i] != '\0'; i++)
    {
        if (caractere == str[i])
        {
            count ++;
        }
    }
    return count;
}

int main(){
    int total;
    char str[255], caractere;

    printf("Entre com uma string: ");
    fgets(str, 255, stdin);

    printf("Entre com o caractere: ");
	scanf ("%c", &caractere);

    total = contaOcorrencia(str, caractere);

    printf("O caractere %c aparece %i vez(es)\n", caractere, total);
	return 0;
}