/*Verificar se duas strings são iguais e se tem o mesmo tamanho */
#include <stdio.h>
#include <string.h>

int main(){
    int tam1, tam2;
    char str1[255], str2[255];

    printf("digite a string 1: ");
    fgets(str1, 255, stdin);

    printf("digite a string 2: ");
    fgets(str2, 255, stdin);

    tam1 = strlen(str1);
    tam2 = strlen(str1);

    if (strcmp(str1, str2) == 0)
    {
        printf("strings iguais\n");
    }
    else
    {
        printf("strings diferentes\n");
    }
    if (tam1 == tam2)
    {
        printf("strings de mesmo tamanho");
    }
    return 0;
}