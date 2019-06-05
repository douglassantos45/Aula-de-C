#include<stdio.h>

//Declarando Função que recebe Matriz
int ImprimirValor (int m[3][3]) {

    for (int i = 0; i < 3; i++) {
        /* code */
        for (int j = 0; j < 3; j++) {
            printf("\n%i", m[i][j]);
        }
    }
}


int main () {

    int matriz[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    ImprimirValor(matriz);
    
}