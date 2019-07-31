#include<stdio.h>

int main () {   

    int mat[3][3], ordenar_Matriz[9];

    //Preenchendo os valores
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++) {
            scanf("%i", &mat[i][j]);
        }
    }

    //Exibindo Matriz
    printf("\nMatriz\n");
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++) {
            printf("[%i] ", mat[i][j]);
        }
    }

    int cont = 0, aux = 0;

    //Preenchendo o vetor
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++) {
            ordenar_Matriz[cont] = mat[i][j];
            cont++;
        }
    }

    //Ordenando os valores
    for(int i = 0; i < 9; i++){
        for(int j = i + 1; j < 9; j++) {
            if(ordenar_Matriz[i] < ordenar_Matriz[j]) {
                aux               = ordenar_Matriz[i];
                ordenar_Matriz[i] = ordenar_Matriz[j];
                ordenar_Matriz[j] = aux;    
            }
        }
    }

    cont = 0;

    //Repassando os valores ordenados para a matriz
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            mat[i][j] = ordenar_Matriz[cont];
            cont++;
        }
    }

    printf("\n");

    //Exibindo os valores
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            printf("[%i]", mat[i][j]);
        }
        printf("\n");
    }

    printf("\n\n");

    return 0;
}