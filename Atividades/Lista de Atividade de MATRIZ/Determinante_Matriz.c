#include<stdio.h>

int main () {
    
    int mat[3][3], produtoDiagonalP = 0, produtoDiagonalS = 0, determinante = 0;
    

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
    
    //Diagonal Principal
    for(int i = 0; i < 3; i++){
        produtoDiagonalP = produtoDiagonalP * mat[i][i]; 
    }
    
    //Diagonal Secundária
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            if(i + j == 2){ //Verifica se a soma é tamanho do vetor, que começa do 0 e vai até 2
                produtoDiagonalS = produtoDiagonalS * mat[i][j];
            }            
        }
    }
    
    //Calculando Determinante
    determinante = produtoDiagonalP - produtoDiagonalS;

    printf("\n\nDeterminante do Produto da diagonal Principal %i - Produto da diagonal Secundária %i = %i", produtoDiagonalP, produtoDiagonalS, determinante);

    

}