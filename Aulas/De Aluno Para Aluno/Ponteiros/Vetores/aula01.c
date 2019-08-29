#include<stdio.h>

int main () {

    int vetor[3] = {1, 2, 3};
    int *ponteiro = vetor;

    printf("\n%i", *ponteiro); //Ele apenas imprimo o valor da 1ª posição

    int *ponteiro2 = &vetor[1]; //Escolhendo qual valor imprimir

    printf("\n%i", *ponteiro2);

    return 0;
}