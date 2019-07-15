#include<stdio.h>

int main (void) {
    //int vetor[5] = {1,2,3,4,5};
    //int vetor[5] = {5};
    int vetor[5] = {};

    //Atribuindo valores para o vetor

    vetor[0] = 1;
    vetor[1] = 2;
    vetor[2] = 3;
    vetor[3] = 4;
    vetor[4] = 5;

    for(int i = 0; i < 5; ++i) {
        printf("\n%i", vetor[i]);
    }
}