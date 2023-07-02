#include <stdio.h>
#define lin 4
#define col 5

int main(){
    int i, j, maior = 0, matriz[lin][col];

    for ( i = 0; i < lin; i++)
    {
        for ( j = 0; j < col; j++)
        {
            printf("digite o valor da matriz[%i, %i]: ", i, j);
            scanf("%i", &matriz[i][j]);

            if (matriz[i][j] > maior)
            {
                maior = matriz[i][j];
            }
        }
    }

    printf("maior elemento dessa matriz é: %i", maior);
    return 0;
}