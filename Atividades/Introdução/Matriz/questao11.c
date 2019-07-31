#include<stdio.h>

#define SIZE 3

int main () {
    /* Leia outra matriz N(4x4) e a seguir, calcule o produto de MAT por N, colocando os resultados em uma triz MN(4x4). Depois mostre todas as matrizes*/

    // 1 2 3 4 5 6 7 8 9
    // 9 8 7 6 5 4 3 2 1

    int mat[SIZE][SIZE], n[SIZE][SIZE], Mn[SIZE][SIZE];

    for(int i = 0; i < SIZE; i++) {
        for(int j = 0; j < SIZE; j++) {
            scanf("%i", &mat[i][j]);
        }
    }

    for(int i = 0; i < SIZE; i++) {
        for(int j = 0; j < SIZE; j++) {
            scanf("%i", &n[i][j]);
        }
    }

    printf("\n\n");

    for(int i = 0; i < SIZE; i++) {
        for(int j = 0; j < SIZE; j++) {
            printf("[ %i ]", mat[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    for(int i = 0; i < SIZE; i++) {
        for(int j = 0; j < SIZE; j++) {
            printf("[ %i ]", n[i][j]);
        }
        printf("\n");
    }

    for(int i = 0; i < SIZE; i++) {
        for(int j = 0; j < SIZE; j++) {
            Mn[i][j] = mat[i][j] * n[i][j];
        }
    }

    printf("\n\nProduto das matrizes\n");

    for(int i = 0; i < SIZE; i++) {
        for(int j = 0; j < SIZE; j++) {
            printf("[%i]", Mn[i][j]);
        }
        printf("\n");
    }

    printf("\nMatriz M\n");

    for(int i = 0; i < SIZE; i++) {
        for(int j = 0; j < SIZE; j++) {
            printf("[ %i ]", mat[i][j]);
        }
        printf("\n");
    }

    printf("\nMatriz N\n");

    for(int i = 0; i < SIZE; i++) {
        for(int j = 0; j < SIZE; j++) {
            printf("[ %i ]", n[i][j]);
        }
        printf("\n");
    }
    
     printf("\n\n"); 
}