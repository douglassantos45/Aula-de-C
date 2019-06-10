#include<stdio.h>

int main(){

    /*Maria acabou de iniciar seu curso de graduação na faculdade de medicina e precisa de sua ajuda para organizar os experimentos de um laboratório o qual ela é responsável. Ela quer saber no final do ano, quantas cobaias foram utilizadas no laboratório e o percentual de cada tipo de cobaia utilizada.

    Este laboratório em especial utiliza três tipos de cobaias: sapos, ratos e coelhos. Para obter estas informações, ela sabe exatamente o número de experimentos que foram realizados, o tipo de cobaia utilizada e a quantidade de cobaias utilizadas em cada experimento.

    Entrada
    A primeira linha de entrada contém um valor inteiro N que indica os vários casos de teste que vem a seguir. Cada caso de teste contém um inteiro Quantia (1 ≤ Quantia ≤ 15) que representa a quantidade de cobaias utilizadas e um caractere Tipo ('C', 'R' ou 'S'), indicando o tipo de cobaia (R:Rato     S:Sapo C:Coelho). */

    int qtd_Valores, qtd_Experimentos, totalR = 0, totalS = 0, totalC = 0;
    float porcent;
    char tipo_Experimentos;

    scanf("%i", &qtd_Valores);
    printf("\nExperimento [Quantidade]+[Tipo (R - Rato)(S - Sapo)(C - Coelho)]");

    for(int i = 0; i < qtd_Valores; i++){
        
        printf("\n>>> ");
        scanf("%i %c", &qtd_Experimentos, &tipo_Experimentos);
        if(tipo_Experimentos == 'R' || tipo_Experimentos == 'r') {
            totalR = totalR + qtd_Experimentos;
        } else if(tipo_Experimentos == 'S' || tipo_Experimentos == 's') {
            totalS = totalS + qtd_Experimentos;
        } else if(tipo_Experimentos == 'C' || tipo_Experimentos == 'c') {
            totalC = totalC + qtd_Experimentos;
        } else {
            printf("\nTipo de Experimento Invalido!!\n");
        }
    }

    printf("\nTotal Ratos: %i\nTotal Sapos: %i\nTotal Coelhos: %i", totalR, totalS, totalC);

}