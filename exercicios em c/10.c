/*Faça um programa que leia uma matriz de inteiros de ordem 5 x 3. Em seguida, o programa
deve verificar quais os elementos da matriz que são múltiplos de 3 e armazenar esses elementos em
um vetor. Por fim, o programa deve exibir o vetor resultante com os elementos múltiplos de 3
presentes na matriz.*/

#include <stdio.h>

#define lin 5
#define col 3

int main(){
    int i, j;
    int mat[lin][col];
    int count = 0;
    int vetor[15];

    for ( i = 0; i < lin; i++)
    {
       for ( j = 0; j < col; j++){
        printf("Informe o valor da matriz[%i][%i]: ", i+1, j+1);
        scanf("%i", &mat[i][j]);

        if (mat[i][j] % 3 == 0){
            vetor[count] = mat[i][j];
            count ++;
        }
       }
    }

    for ( i = 0; i < count; i++){
        printf("Matrizes múltiplas de 3 : %i\n", vetor[i]);
    }
}