#include <stdio.h>

int main(){
    int m, n, i, j;
    int par = 0, impar = 0;

    printf("digite os tamanhos da matriz: ");
    scanf("%i%i", &m, &n);
    int matriz[m][n];

    for ( i = 0; i < m; i++)
    {
        for ( j = 0; j < n; j++)
        {
            printf("digite o valor da matriz[%i , %i]: ", i+1, j+1);
            scanf("%i", &matriz[i][j]);
        }
    }
    

    for ( i = 0; i < m; i++)
    {
        for ( j = 0; j < n; j++)
        {
            if (matriz[i][j] % 2 == 0)
            {
                par += matriz[i][j];
            }
            else
            {
                impar += matriz[i][j];
            }
        }
    }
    printf("números pares = %i\nsoma dos números ímpares = %i", par, impar);
    return 0;
}