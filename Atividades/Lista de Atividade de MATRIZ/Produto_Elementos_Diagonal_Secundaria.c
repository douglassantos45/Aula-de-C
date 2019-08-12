#include<stdio.h>


int main () {

    int mat[3][3], prod_Diagonal_principal = 1, prod_Diagonal_secundaria = 1, result_prod = 0;

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            scanf("%i", &mat[i][j]);
        }
    }

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            printf("[%i]", mat[i][j]);
        }
        printf("\n");
    }

    printf("\nProduto da Diagonal Principal\n");
    
    for(int i = 0; i < 3; i++) {
        prod_Diagonal_principal *= mat[i][i];
    }

    printf("\n%i", prod_Diagonal_principal);

    printf("\nProduto da Diagonal Secundária\n");
    
    for(int i = 0; i < 3; i++) {
        prod_Diagonal_secundaria += mat[i][i];
    }

    printf("\n%i", prod_Diagonal_secundaria);

    calcDeterminante(prod_Diagonal_principal, prod_Diagonal_secundaria);

    result_prod = prod_Diagonal_principal - prod_Diagonal_secundaria;

    printf("\n\nDeterminante de %i - %i = %i", prod_Diagonal_principal, prod_Diagonal_secundaria, result_prod);

    printf("\n\n");

}