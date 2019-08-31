/*******************************************
 * Passar e Receber Estruturas à uma Função 
 *******************************************/

#include<stdio.h>
#include<string.h>

struct Horario {
    int hora,
        minutos,
        segundos;
};

int main(int args, const char *argv[]) {

    //Declarando Função Struct
    struct Horario exibirHorario(struct Horario x);

    //Declarando Struct
    struct Horario agora;

    agora.hora = 1;
    agora.minutos = 30;
    agora.segundos = 55;
    
    struct Horario proximo;

    proximo = exibirHorario(agora);
    
    printf("\n%i:%i:%i", proximo.hora, proximo.minutos, proximo.segundos);

    return 0;
}

struct Horario exibirHorario(struct Horario x) {

    printf("\n%i:%i:%i", x.hora, x.minutos, x.segundos);
    
    //Alterando valores das variáveis
    x.hora = 100;
    x.minutos = 100;
    x.segundos = 100;

    //Retornando valores para a Strutc proximo
    return x;
}