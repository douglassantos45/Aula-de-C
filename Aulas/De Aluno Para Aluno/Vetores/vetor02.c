#include<stdio.h>
#include<stdlib.h>

int main(void) {

    float notas[4] = {};
    float total = 0;
    float media = 0;

    printf("\nInforme o valor das 4 Notas: ");

    for(int i = 0; i < 4; i++) {
        printf("\n\nInforme a %i nota\n>>> ", i+1);
        scanf("%f", &notas[i]);
        system("clear");
    }

    printf("\nNotas digitadas");

    for(int j = 0; j < 4; j++) {
        printf("\n%iº Nota\n%.2f\n=-=-=-=-=-=", j+1, notas[j]);
        total += notas[j];
    }

    media = total / 4;

    printf("\n\n=-=-=-=-=-=-=-=-=-=-\nValor da média: %.2f", media);

    return 0;
}