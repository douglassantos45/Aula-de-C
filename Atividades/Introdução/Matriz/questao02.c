#include<stdio.h>

#define SIZE 3
#define SIZE2 4

int main(int args, const char *argv[]) {

    /*Faça um algoritmo que leia uma matriz notas[3][4], do tipo foloat, e informe qual a média geral da turma*/

    float notas[SIZE][SIZE2], media;

    for(int i = 0; i < SIZE; i++) {
        printf("\n%iº Semestre", i + 1);
        for(int j = 0; j < SIZE2; j++) {
            printf("\n%iª Nota >>> ", j + 1);
            scanf("%f", &notas[i][j]);
            media += notas[i][j] / SIZE2;        
        }
    }

    printf("\nMédia %.2f", media);

    return 0;
}