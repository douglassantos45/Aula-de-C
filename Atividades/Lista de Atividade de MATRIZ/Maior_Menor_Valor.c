#include<stdio.h>

int main () {

    int mat[3][3], INT_MENOR = 10000, INT_MAIOR = 0;

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            scanf("%i", &mat[i][j]);
        }
    }

    printf("\n\nExibindo Matriz");

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            printf("[ %i ]", mat[i][j]);
        }
        printf("\n");
    }

    //Pegando o menor e maior valor da matriz

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            
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