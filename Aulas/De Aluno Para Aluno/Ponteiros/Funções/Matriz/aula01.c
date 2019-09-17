#include<stdio.h>

#define TAM 3

int main(int argc, char const *argv[]){
    
    int matriz[TAM][TAM];
    int valor;
    int *ponteiro = (int *) matriz;

    for(int i = 0; i < TAM; i++) {
        for(int j = 0; j < TAM; j++) {
            matriz[i][j] = i + j;
        }
    }

    for(int i = 0; i < TAM; i++) {
        for(int j = 0; j < TAM; j++) {
            //Acessando os valores por índice com ponteiro
            valor = *(ponteiro +(i * TAM) + j);
            printf("\nlinha: %i\nColuna: %i\n", i, j, valor);
        }
    }


    return 0;
}
