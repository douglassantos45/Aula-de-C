#include<stdio.h>

int main () {
    
    /*Leia 6 valores. Em seguida, mostre quantos destes valores digitados foram positivos. Na próxima linha, deve-se mostrar a média de todos os valores positivos digitados, com um dígito após o ponto decimal.*/

    float valores[6], medPositivos = 0, cont;

    for(int i = 0; i < 6; i++) {
        scanf("%f", &valores[i]);
        if(valores[i] > 0) {
            medPositivos = medPositivos + valores[i];
            cont++;
        }
    }

    printf("\nTotal de Positivos: %.0f\nMédia: %.1f", cont, medPositivos / cont);

}