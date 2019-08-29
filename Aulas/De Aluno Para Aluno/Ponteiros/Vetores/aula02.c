#include<stdio.h>

int main () {

    int vetor[3] = {1, 2, 3};
    int *ponteiro = vetor;

    printf("\n%i", *ponteiro);

    ++ponteiro;

    printf("\n%i", *ponteiro);

    ++ponteiro;

    printf("\n%i", *ponteiro);

    return 0;
}