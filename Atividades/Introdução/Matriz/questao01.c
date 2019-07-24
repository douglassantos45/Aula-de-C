#include<stdio.h>

int main () {

    /*Faça um algoritmo que leia uma matriz de inteiros M[3][3] e mostre o menor valor da matriz;*/

    int matriz[3][3], menor = 1000;

    for(int i = 0; i < 2; i++) {
        printf("\n%iº Linha ", i + 1);
        for(int j = 0; j < 2; j++) {
            printf("\n%iº Valor: ", j+1);
            scanf("%i", &matriz[i][j]);
        }
    }

    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            (menor > matriz[i][j]) ? menor = matriz[i][j] : printf("\n");
        }
    }

    printf("\nMenor valor %i", menor);

}


