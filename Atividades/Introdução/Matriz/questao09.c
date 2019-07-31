#include<stdio.h>

#define SIZE 3

int main () {

    /* Exiba a matriz e o produto dos elementos da diagonal principal dessa matriz. Exiba a matriz e a soma dos elementos da diagonal secundária dessa matriz */
    
    //1 2 3 4 5 6 7 8 9

    int mat[SIZE][SIZE], PROD = 1;

    for(int i = 0; i < SIZE; i++) {
        for(int j = 0; j < SIZE; j++) {
            scanf("%i", &mat[i][j]);
        }
    }

    for(int i = 0; i < SIZE; i++) {
        for(int j = 0; j < SIZE; j++) {
            printf("[%i]", mat[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    printf("\nProduto da Diagonal Principal\n");
    
    for(int i = 0; i < SIZE; i++) {
        PROD *= mat[i][i];
    }

    printf("\n%i", PROD);

    PROD = 0;

    printf("\nSoma da Diagonal Secundária\n");
    
    for(int i = 0; i < SIZE; i++) {
        PROD += mat[i][i];
    }

    printf("\n%i", PROD);

    printf("\n\n");

}