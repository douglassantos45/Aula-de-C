#include<stdio.h>

int main () {   

    int mat[3][3];

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++) {
            scanf("%i", &mat[i][j]);
        }
    }

    //Diagonal Principal
    for(int i = 0; i < 3; i++) {
        printf("[%i] ", mat[i][i]);
    }

    return 0;
}