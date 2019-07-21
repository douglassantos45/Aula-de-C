#include<stdio.h>

int main (int args, const char *argv[]){

    struct Horario {
        int hora,
            minuto,
            segundo;
    };

    struct Horario agora, *depois;

    depois = &agora;
    
    //Alterando valores da Strcut Horario pelo ponteiro;
    (*depois).hora = 20;
    (*depois).minuto = 10;
    (*depois).segundo = 55;

    printf("\n%i:%i:%i", agora.hora, agora.minuto, agora.segundo);

    //Outra forma de alterar valores pelo ponteiro
    depois->hora = 30;
    depois->minuto = 45;
    depois->segundo = 12;

    printf("\n%i:%i:%i", agora.hora, agora.minuto, agora.segundo);

    int somatoria = 100;

    struct Horario antes;

    //Recebendo os valores do ponteiro depois
    antes.hora = somatoria + depois->segundo;
    antes.minuto = agora.hora + depois->minuto;
    antes.segundo = depois->minuto + depois->segundo;

    printf("\n%i:%i:%i", antes.hora, antes.minuto, antes.segundo);

    getchar();

    return 0;
}