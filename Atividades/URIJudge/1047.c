#include<stdio.h>

int main (void) {

    /*Leia a hora inicial, minuto inicial, hora final e minuto final de um jogo. A seguir calcule a duração do jogo.

    Obs: O jogo tem duração mínima de um (1) minuto e duração máxima de 24 horas.*/

    int horaI, horaF, minutoI, minutoF, calcHora = 0, calcMinuto = 0;

    scanf("%i %i %i %i", &horaI, &minutoI, &horaF, &minutoF, &calcHora, &calcMinuto);

    if (horaI > horaF) {
        for (int i = horaI; i > horaF; i--) {
            for (int j = minutoI; j < minutoF; j++) {
                calcMinuto = calcMinuto + 1;
                minutoI = minutoI + 1;
            }
            calcHora = calcHora + 1;
        }

        printf("\nO JOGO DUROU %i HORA(S) E %i MINUTO(S)", 24 - calcHora, calcMinuto);
        
    } else if (horaI < horaF) {
        for (int i = horaI; i < horaF; i++) {
            for (int j = minutoI; j < minutoF; j++) {
                calcMinuto = calcMinuto + 1;
                minutoI = minutoI + 1;
            }
        calcHora = calcHora + 1;
        }

        printf("\nO JOGO DUROU %i HORA(S) E %i MINUTO(S)", calcHora, calcMinuto);
    } else {
        printf("\nO JOGO DUROU 24 HORA(S) E 0 MINUTO(S)");
    }

    

    printf("\n\n");

    return 0;
}