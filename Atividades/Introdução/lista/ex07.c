#include<stdio.h>

int main () {

    /*Faça um algoritmo que copie o conteúdo de um vetor V1[8] em um
    segundo vetor V2[8]. */

    int v2[8], v1[8];

    for(int i = 0; i < 3; i++) {
        v1[i] = i; //Preenchendo o vetor v1 
        v2[i] = v1[i]; //Copiando os valores
    }

    for(int i = 0; i < 3; i++) {
        printf("\nVetor 1 [%i]\nVetor 2 [%i]", v1[i], v2[i]);
    }    

    return 0;
}