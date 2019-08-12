#include<stdio.h>

int main () {

    int mat[3][3];

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            scanf("%i", &mat[i][j]);
        }
    }

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            printf("[%i]", mat[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    printf("\nDiagonal Secundária\n");
    
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            if(i + j < 2) {
                printf("[%i] ", mat[i][j]);
            }
        }
    }

    printf("\n\n");

}