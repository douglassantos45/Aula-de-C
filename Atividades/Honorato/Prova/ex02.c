#include<stdio.h>

#define SIZE 2

#define TRANSIZE 4

int main () {

    // Faça um algoritmo que mande o usuário preencher uma matriaz M[2][4] e em seguida gere uma matriz transposta MT[4][2] e no final mostre a matriz original e a matriz transposta

    // 1 2 3 4 5 6 7 8 9 10 11 12

    int MAT[TRANSIZE][SIZE], M[SIZE][TRANSIZE];

    printf("\nInforme os valores: ");

    for(int i = 0; i < SIZE; i++){
        for(int j = 0; j < TRANSIZE; j++) {
            scanf("%i", &M[i][j]);
        }
    }

    for(int i = 0; i < SIZE; i++){
        for(int j = 0; j < TRANSIZE; j++) {
            MAT[j][i] = M[i][j];
        }
    }

    printf("\n\nMatriz Original\n\n");

    for(int i = 0; i < SIZE; i++){
        for(int j = 0; j < TRANSIZE; j++) {
            printf("[%i]", M[i][j]);
        }
        printf("\n");
    }

    printf("\n\nMatriz Transporta\n\n");

    for(int i = 0; i < TRANSIZE; i++){
        for(int j = 0; j < SIZE; j++) {
            printf("[%i]", MAT[i][j]);
        }
        printf("\n");
    }

    return 0;
}