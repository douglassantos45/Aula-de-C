#include<stdio.h>

int main () {

    int mat[3][3], INT_MENOR = 10000;

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            scanf("%i", &mat[i][j]);
        }
    }

    printf("\n\nExibindo Matriz\n\n");

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            printf("[ %i ]", mat[i][j]);
        }
        printf("\n");
    }

    //Pegando o menor valor da matriz

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            
            if(INT_MENOR > mat[i][j]) {
                INT_MENOR = mat[i][j];
            }
        }
    }

    printf("\nMenor Valor %i\nPosição do menor valor", INT_MENOR);

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            if(INT_MENOR == mat[i][j]) {
                printf("\n[%i] [%i] ", i, j);
            }
        }
    }

}