#include<stdio.h>

int main () {

    /*Ler o ano atual e o ano de nascimento de uma pessoa. Escrever uma mensagem que diga se
    ela poderá ou não votar este ano (não é necessário considerar o mês em que a pessoa
    nasceu).*/

    int anoAtual, anoNascimento;

    printf("\nInforme o ano atua\n>>> ");
    scanf("%i", &anoAtual);
    printf("\nInforme o ano de nascimento\n>>> ");
    scanf("%i", &anoNascimento);

    (anoAtual - anoNascimento >= 18) ? printf("\nApto a votar em %i", anoAtual) : printf("\nNão é apto a votar em %i", anoAtual);

    printf("\n\n");

}