#include<stdio.h>

#define SIZE 3

int main(void) {

    /* Leia um valor A, e a seguir, multiplique a matriz MAT pelo valor A, colocando o resultado em um vetor SA[16]. Mostre a matriz MAT e o vetor SA */

    //1 2 3 4 5 6 7 8 9

    int MAT[SIZE][SIZE], A, SA[9];

    for(int i = 0; i < SIZE; i++) {
        for(int j = 0; j < SIZE; j++) {
            scanf("%i", &MAT[i][j]);
        }
    }

    A = 2;

    int CONT_NUMBER = 0;

    for(int i = 0; i < SIZE; i++) {
        for(int j = 0; j < SIZE; j++) {
            SA[CONT_NUMBER] = MAT[i][j] * A;
            CONT_NUMBER++;
        }
    }

    for(int i = 0; i < SIZE; i++) {
        for(int j = 0; j < SIZE; j++) {
            printf("[%i] ", MAT[i][j]);
        }
        printf("\n");
    }

    printf("\n\n");

    CONT_NUMBER = 0;

    while (SA[CONT_NUMBER] != '\0') {
        printf("[%i] ", SA[CONT_NUMBER]);
        CONT_NUMBER++;
    }
    
    printf("\n\n");

    return 0;
}