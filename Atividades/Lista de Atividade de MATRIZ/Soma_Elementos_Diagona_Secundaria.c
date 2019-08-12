#include<stdio.h>

int main () {

    int mat[3][3], soma = 0;

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            scanf("%i", &mat[i][j]);
        }
    }

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            printf("[ %i ]", mat[i][j]);
        }
        printf("\n");
    }

    
    printf("\n\nElementos da diagonal Principal\n\n");
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
           if(i + j == 2) {
               printf("[%i]", mat[i][j]);
               soma += mat[i][j];
            } 
        }
     }
    
    printf("\n\nSoma dos elementos %i", soma);
    
    printf("\n\n"); 
}