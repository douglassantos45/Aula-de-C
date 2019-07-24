#include<stdio.h>

#define SIZE 3

void contarVezes(int vetor[]) {

    int x;

    printf("\n\nInforme o valor a ser pesquisado\n>>> ");
    scanf("%i", &x);

    int cont = 0;

    for(int i = 0; i < SIZE; i++) {
        if(vetor[i] == x) {
            cont++;
        }
    }

    (cont > 1) ? printf("\nO valor %i, apareceu %i vezes", x, cont) : printf("\nO valor %i, apareceu %i veze", x, cont);

    printf("\n\n");

}


int main () {

    /*Faça um algoritmo para ler um vetor de 20 números. Após isto, ler mais
    um número qualquer, calcular e escrever quantas vezes esse número
    aparece no vetor. */

    int vetor[SIZE];

    for(int i = 0; i < SIZE; i++) {
        printf("\nInforme o %iº valor\n>>> ", i+1);
        scanf("%i", &vetor[i]);
    }

    contarVezes(vetor);

    

    return 0;
}