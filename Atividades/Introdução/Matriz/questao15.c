#include<stdio.h>

#define SIZE 3

//Declarando Função da Determinante
int calcDeterminante(int x, int y);

//-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=
//Inicio função calcular Produto
int calcProduto(int mat[SIZE][SIZE]) {

    int PROD_DIAGONAL_P = 1, PROD_DIAGONAL_S = 1;

    printf("\nProduto da Diagonal Principal\n");
    
    for(int i = 0; i < SIZE; i++) {
        PROD_DIAGONAL_P *= mat[i][i];
    }

    printf("\n%i", PROD_DIAGONAL_P);

    printf("\nProduto da Diagonal Secundária\n");
    
    for(int i = 0; i < SIZE; i++) {
        PROD_DIAGONAL_S += mat[i][i];
    }

    printf("\n%i", PROD_DIAGONAL_S);

    calcDeterminante(PROD_DIAGONAL_P, PROD_DIAGONAL_S);

}
//-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=
//Fim da função

//-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=
//Início da função da Determinante
int calcDeterminante(int x, int y) {
    int RESULT_PROD = 0;

    RESULT_PROD = x - y;

    printf("\n\nDeterminante de %i - %i = %i", x, y, RESULT_PROD);
}
//-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=
//Fim da função


int main () {

    /* Calcule e mostre o determinante da matriz, e mostre a matriz MAT */
    
    //1 2 3 4 5 6 7 8 9

    int mat[SIZE][SIZE];

    for(int i = 0; i < SIZE; i++) {
        for(int j = 0; j < SIZE; j++) {
            scanf("%i", &mat[i][j]);
        }
    }

    for(int i = 0; i < SIZE; i++) {
        for(int j = 0; j < SIZE; j++) {
            printf("[%i]", mat[i][j]);
        }
        printf("\n");
    }

    calcProduto(mat);

    printf("\n\n");

}