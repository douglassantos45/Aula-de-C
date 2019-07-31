#include<stdio.h>

#define SIZE 3

int main () {
    /* Exiba a matriz, o maior valor e o menor valor dessa matriz */

    // 1 2 3 4 5 6 7 8 9

    int mat[SIZE][SIZE], INT_MENOR = 10000, INT_MAIOR = 0;

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

    //Pegando o menor e maior valor da matriz

    for(int i = 0; i < SIZE; i++) {
        for(int j = 0; j < SIZE; j++) {
            
            if(INT_MAIOR < mat[i][j]) {
                INT_MAIOR = mat[i][j];
            }
            if(INT_MENOR > mat[i][j]) {
                INT_MENOR = mat[i][j];
            }
        }
    }

    printf("\nMenor Valor %i", INT_MENOR);
    printf("\nMaior Valor %i", INT_MAIOR);
    
    printf("\n\n"); 
}