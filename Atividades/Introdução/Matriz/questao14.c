#include<stdio.h>

#define SIZE 3
#define TAM_MATRIZ 9

//-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=
//Início da função ordenar 
int ordenarMatriz(int mat[SIZE][SIZE]) {
    
    int ORDER_AUX[TAM_MATRIZ];

    int CONT_NUMBER = 0, AUX;

    for(int i = 0; i < SIZE; i++) {
        for(int j = 0; j < SIZE; j++) {
           ORDER_AUX[CONT_NUMBER] = mat[i][j]; 
           CONT_NUMBER++;
        }
    }

    for(int i = 0; i < TAM_MATRIZ; i++) {
        for(int j = i + 1; j < TAM_MATRIZ; j++) {
            //Ordenador da Matriz
            if(ORDER_AUX[i] < ORDER_AUX[j]) {
                AUX          = ORDER_AUX[i];
                ORDER_AUX[i] = ORDER_AUX[j];
                ORDER_AUX[j] = AUX;
            }
        }
    }    

    CONT_NUMBER = 0;

    //Passando os valores ordenados para a matriz
    for(int i = 0; i < SIZE; i++) {
        for(int j = 0; j < SIZE; j++) {
            mat[i][j] = ORDER_AUX[CONT_NUMBER];
            CONT_NUMBER++;
        }
    }

    printf("\n\n");

    //Exibindo os valores
    for(int i = 0; i < SIZE; i++) {
        for(int j = 0; j < SIZE; j++) {
            printf("[%i] ", mat[i][j]);
        }
        printf("\n");
    }
}
//-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=
//Fim da função

int main () {

    /* Exiba a matriz original e todos os elementos da matriz na ordem decrescente */

    // 1 2 3 4 5 6 7 8 9
    // 9 8 7 6 5 4 3 2 1
    // 1 3 4 5 6 7 8 9 2

    int mat[SIZE][SIZE];

    for(int i = 0; i < SIZE; i++) {
        for(int j = 0; j < SIZE; j++) {
            scanf("%i", &mat[i][j]);
        }
    }

    printf("\n\n");

    for(int i = 0; i < SIZE; i++) {
        for(int j = 0; j < SIZE; j++) {
            printf("[ %i ]", mat[i][j]);
        }
        printf("\n");
    }

    ordenarMatriz(mat);


    printf("\n\n"); 
}