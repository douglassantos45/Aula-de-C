#include<stdio.h>

#define SIZE 3

int main () {

    /* Escreva na tela a matriz e os elementos do triângulo inferior da diagonal da secundária da matriz */
    //1 2 3 4 5 6 7 8 9

    int mat[SIZE][SIZE];

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

    printf("\nDiagonal Secundária\n");
    
    for(int i = 0; i < SIZE; i++) {
        for(int j = 0; j < SIZE; j++) {
            if(i + j == 2) {
                printf("[%i] ", mat[i][j]);
            }
        }
    }

    printf("\n\n");

}