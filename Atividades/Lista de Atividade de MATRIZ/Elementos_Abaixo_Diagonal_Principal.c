#include<stdio.h>

int main () {
    
    int mat[3][3];
    

    //Preenchendo Matriz
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++){
            scanf("%i", &mat[i][j]);    
        }
    }

    printf("\nMostrando Matriz");

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("[%i]", mat[i][j]);
        }
        printf("\n");    
    }
    
    //Elementos Abaixo da Diagonal Principal
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            if(i > j){
                printf("[%i]", mat[i][j]);
            }            
        }
        printf("\n");
    }
    
}