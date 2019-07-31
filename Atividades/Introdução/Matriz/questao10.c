#include<stdio.h>

#define SIZE 3

int main () {
    /* Exiba a matriz e o índice(posição) do menor valor dessa matriz */

    // 1 2 3 4 5 6 7 8 9

    int mat[SIZE][SIZE], INT_MENOR = 10000, POS[SIZE][SIZE];

    for(int i = 0; i < SIZE; i++) {
        for(int j = 0; j < SIZE; j++) {
            scanf("%i", &mat[i][j]);
        }
    }

    printf("\n\n");

    for(int i = 0; i < SIZE; i++) {
        for(int j = 0; j < SIZE; j++) {
            printf("[ %i ]", mat[i][j]);
        }
        printf("\n");
    }

    for(int i = 0; i < SIZE; i++) {
        for(int j = 0; j < SIZE; j++) {
            if(INT_MENOR > mat[i][j]){
                INT_MENOR = mat[i][j];
            }
        }
    }

    printf("\nMenor Valor %i\nPosição do menor valor", INT_MENOR);

    for(int i = 0; i < SIZE; i++) {
        for(int j = 0; j < SIZE; j++) {
            if(INT_MENOR == mat[i][j]) {
                printf("\n[%i] [%i] ", i, j);
            }
        }
    }

    
    
     printf("\n\n"); 
}