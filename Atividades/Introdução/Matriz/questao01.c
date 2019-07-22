#include<stdio.h>

int main () {
/*Faça um algoritmo que leia uma matriz de inteiros M[3][3] e mostre o menor valor da matriz;*/

    int matriz[3][3], menor = 0;

    for(int i = 0; i < 2; i++) {
        printf("\nPrimeira Linha %i ", i + 1);
        for(int j = 0; j < 2; i++) {
            printf("\nValor %i: ",j+1);
            scanf("%i", &matriz[i][j]);
            if(menor > matriz[i][j]){
                menor = matriz[i][j];
            }else {
                menor = matriz[i][j];
            }
        }
    }

    printf("\nMenor valor %i", menor);

}


