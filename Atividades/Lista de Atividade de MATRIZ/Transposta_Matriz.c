#include<stdio.h>

int main () {

    // Mostre a matriz MAT e gere e mostre a transposta dessa matriz

    // 1 2 3 4 5 6 7 8 9 10 11 12

    int MAT[3][3], M[3][3];

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++) {
            scanf("%i", &M[i][j]);
        }
    }

    //Transposta da matriz
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++) {
            MAT[j][i] = M[i][j];
        }
    }

    printf("\n\nExibindo Matriz");
    
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++) {
            printf("[%i]", M[i][j]);
        }
        printf("\n");
    }

    printf("\n\nMatriz Transporta\n\n");

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++) {
            printf("[%i]", MAT[i][j]);
        }
        printf("\n");
    }

    return 0;
}