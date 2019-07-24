#include<stdio.h>

#define SIZE 3

int main (int args, const char *argv[]) {
    /*Faça um algoritmo que leia uma matriz notas[3][3], onde na primeira coluna deve ter a nota do trabalho, na segunda a nota da prova, que deve ser informadas pelo usuário e na terceira coluna a média, que deve ser calculada pelo programa*/

    float notas[SIZE][SIZE], media;

    printf("\nInforme a nota do trabalho\n>>> ");
    scanf("%f", &notas[0][0]);
    printf("\nInforme a nota da prova\n>>> ");
    scanf("%f", &notas[0][1]);

    notas[0][3] = notas[0][0] + notas[0][1];

    printf("\nMédia %.2f", media = notas[0][3] / 2);

}