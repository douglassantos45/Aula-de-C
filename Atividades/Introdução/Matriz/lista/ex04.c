#include<stdio.h>

#define SIZE 3

void multiplicaVetor(int vetor[], int x) {
    
    int vetorM[SIZE];

      for(int i = 0; i < SIZE; i++) {
        vetorM[i] = vetor[i] * x;
    }

    for(int i = 0; i < SIZE; i++) {
        printf("\nMultiplicação do Vetor M [%i]", vetorM[i]);
    }

}

int main(int argc, char const *argv[]) {
    
    /*Ler um vetor A de 10 números. Após, ler mais um número e guardar em
    uma variável X. Armazenar em um vetor M o resultado de cada elemento
    de A multiplicado pelo valor X. Logo após, imprimir o vetor M. */

    int vetorA[SIZE], x;

    for(int i = 0; i < SIZE; i++) {
        printf("\nInforme o %iº valor\n>>> ", i + 1);
        scanf("%i", &vetorA[i]);
    }

    printf("\nInforme o valor do multiplicador\n>>> ");
    scanf("%i", &x);

    multiplicaVetor(vetorA, x);


    return 0;
}
