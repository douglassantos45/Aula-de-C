#include<stdio.h>

int main (void) {

    /*Leia a hora inicial e a hora final de um jogo. A seguir calcule a duração do jogo, sabendo que o mesmo pode começar em um dia e terminar em outro, tendo uma duração mínima de 1 hora e máxima de 24 horas.*/

    int horaInicio, horaFim, calcHora;

    scanf("%i %i", &horaInicio, &horaFim);

    if (horaInicio > horaFim) {
        for (int i = horaInicio; i > horaFim; i--){
            /* code */
            calcHora = calcHora + 1;
        }
        printf("\nO JOGO DUROU %i HORA(S)", 24 - calcHora);

    } else if (horaInicio < horaFim) {
        for (int i = horaInicio; i < horaFim; i++){
            /* code */
            calcHora = calcHora + 1;
        }
        printf("\nO JOGO DUROU %i HORA(S)", calcHora);

    } else printf("\nO JOGO DUROU 24 HORA(S)");

    printf("\n\n");

    return 0;
}