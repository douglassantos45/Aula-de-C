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
    
    //Elementos Abaixo da Diagonal Secundária
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            if(i + j > 2){ // Verifica se a soma é maior que o tamanho do vetor que começa em 0 e vai até 2
                printf("[%i]", mat[i][j]);
            }            
        }
        printf("\n");
    }
    
    printf("\n\n");  
}
