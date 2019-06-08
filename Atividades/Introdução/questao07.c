#include<stdio.h>

int main () {

    /*Ler a hora de início e a hora de fim de um jogo de Xadrez (considere apenas horas inteiras,
    sem os minutos) e calcule a duração do jogo em horas, sabendo-se que o tempo máximo de
    duração do jogo é de 24 horas e que o jogo pode iniciar em um dia e terminar no dia
    seguinte.*/

    int CalcularDuracao(int x, int y);
    int a, b;

    scanf("%i %i", &a, &b);

    CalcularDuracao(a, b);

}

int CalcularDuracao(int x, int y) {

    int duracao = x - y;
    (y < x) ? (duracao = (24 - x) + y) 
    : (duracao = y - x);
    printf("\nO JOGO DUROU %i HORA(S)", duracao);
}