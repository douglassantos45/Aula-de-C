#include<stdio.h>

int main () {

    /*Estruturas que contêm ponteiros*/

    struct horario {
        int *pHora;
        int *pMinuto;
        int *pSegundo;
    };

    //Definindo uma Estrutura do tipo hoje

    struct horario hoje;

    int hora = 17;
    int minuto = 30;
    int segundo = 45;

    //Passando os valores das variáveis para os ponteiros da Estrutura

    hoje.pHora = &hora;
    hoje.pMinuto = &minuto;
    hoje.pSegundo = &segundo;

    //Imprimindo os valores

    printf("\n%i:%i:%i", *hoje.pHora, *hoje.pMinuto, *hoje.pSegundo);

    //Modificando valores

    *hoje.pSegundo = 50;

    printf("\n%i:%i:%i", *hoje.pHora, *hoje.pMinuto, *hoje.pSegundo);

    return 0;
}