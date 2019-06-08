#include "stdio.h"
#include "string.h"

int h1, h2, m1, m2; 
int hV = 0, hN = 0, mV = 0, mN = 0;

int VerificaH(int x, int y) {
    if(x > y) {
        hV = x; hN = y;
    } else {
        hN = x; hV = y;
    }
}

_Bool VerificaF(int x, int y) {
    if(x > y) {
        mV = x; mN = y;
    } else {
        mN = x; mV = y;
    }
}


//Principal
_Bool main() {

    /* Escreva um algoritmo que leia as idades de 2 homens e de 2 mulheres (considere que as
    idades dos homens serão sempre diferentes entre si, bem como as das mulheres). Calcule e
    escreva a soma das idades do homem mais velho com a mulher mais nova, e o produto das
    idades do homem mais novo com a mulher mais velha.*/
    
    printf("\nInforme a idade do 1º Homem\n>>> ");
    scanf("%i", &h1);
    printf("\nInforme a idade do 2º Homem\n>>> ");
    scanf("%i", &h2);
    
    VerificaH(h1, h2);

    printf("\nInforme a idade da 1º Mulher\n>>> ");
    scanf("%i", &m1);
    printf("\nInforme a idade da 2º Mulher\n>>> ");
    scanf("%i", &m2);

    VerificaF(m1, m2);
    
    printf("\nA soma das idadades do homem mais novo(%i anos) com a mulher mais nova(%i anos)\né: %i", hN, mN, hN + mN);
    printf("\nO produto das idades do homem mais novo(%i anos) com a mulher mais velha(%i anos)\né: %i", hN, mV, hN * mV);

}