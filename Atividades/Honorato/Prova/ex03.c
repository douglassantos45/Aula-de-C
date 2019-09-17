#include<stdio.h>

int mostrarIdade(int m, int d, int a){

    printf("\nVocê nasceu em %i no mês %i do ano de %i", d, m, a);
    printf("\nE tem %i anos\n\n", 2019 - 1998);

}


int main () {

    /*Crie um algoritmo que solicite o dia, o mês e o ano de nascimento de uma pessoa em formato numeral, depois chame uma função que mostre a idade dessa pessoa, passando os dados solicitados como parâmentro da função*/

    int mes, dia, ano;
    printf("\nInforme a data de nascimento: DIA/MES/ANO\n>>> ");
    scanf("%i %i %i", &dia, &mes, &ano);

    mostrarIdade(mes, dia, ano);


    return 0;
}