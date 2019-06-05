#include<stdio.h>

int main() {

    /* Escreva um algoritmo que leia as idades de 2 homens e de 2 mulheres (considere que as
    idades dos homens serão sempre diferentes entre si, bem como as das mulheres). Calcule e
    escreva a soma das idades do homem mais velho com a mulher mais nova, e o produto das
    idades do homem mais novo com a mulher mais velha.*/
    int h1, h2, m1, m2, hV = 0, hN = 0, mV = 0, mN = 0;
    
    printf("\nM\n>>> ");
    scanf("%i", &h1);
    printf("\nM\n>>> ");
    scanf("%i", &h2);
    
    if(h1 > h2) {
        hV = h1;
        hN = h2;
    } else {
        hN = h1;
        hV = h2;
    }

    printf("\nF\n>>> ");
    scanf("%i", &m1);
    printf("\nF\n>>> ");
    scanf("%i", &m2);

    if(m1 > m2) {
        mV = m1;
        mN = m2;
    } else {
        mN = m1;
        mV = m2;
    }

    printf("\nA soma das idadades do homem mais novo com a mulher mais nova é %i", hN + mN);
    printf("\nO produto das idades do homem mais novo com a mulher mais velha é %i", hN * mV);

}