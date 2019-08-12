#include<stdio.h>

#define SIZE 2

int main () {

    int matriz[SIZE][SIZE], matriz2[SIZE][SIZE], aux[SIZE][SIZE];

    for(int i = 0; i < SIZE; i++) {
        for(int j = 0; j < SIZE; j++) {
            printf("\nPosição %i valor %i ", i, j);
            scanf("%i", &matriz[i][j]);
        }
    }

    for(int i = 0; i < SIZE; i++) {
        for(int j = 0; j < SIZE; j++) {
            printf("\nPosição %i valor %i ", i, j);
            scanf("%i", &matriz2[i][j]);
        }
    }


    for(int i = 0; i < SIZE; i++) {
        for(int j = 0; j < SIZE; j++) {
            printf("[%i] ", matriz[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    for(int i = 0; i < SIZE; i++) {
        for(int j = 0; j < SIZE; j++) {
            printf("[%i] ", matriz2[i][j]);
        }
        printf("\n");
    }

    for(int i = 0; i < SIZE; i++) {
        printf("\nValores Diagonal Principal %i", matriz[i][i]);
    }

    printf("\n");

    for(int i = 0; i < SIZE; i++) {
        printf("\nValores Diagonal Principal %i", matriz2[i][i]);
    }

    printf("\n");

    //Verificando Diagonal Secundária

    for(int i = 0; i < SIZE; i++) {
        for(int j = 0; j < SIZE; j++) {
            if(i+j == 1) { // == dependente do tamanho da matriz, se for 4x4, coloca == 4
                printf("\nValores Diagonal Secundária %i", matriz[i][j]);
                printf("\nValores Diagonal Secundária %i", matriz2[i][j]);
                aux[i][j] = matriz[i][j];
                matriz[i][j] = matriz2[i][j];  
                matriz2[i][j] = aux[i][j];
            }
        }
    }

    printf("\n\n");

    //Trocando Diagonal Secundária
    
    for(int i = 0; i < SIZE; i++) {
        for(int j = 0; j < SIZE; j++) {
            printf("[%i] ", matriz[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    for(int i = 0; i < SIZE; i++) {
        for(int j = 0; j < SIZE; j++) {
            printf("[%i] ", matriz2[i][j]);
        }
        printf("\n");
    }

    

    
}