#include<stdio.h>

#define SIZE 10

int main(){

    /*Ler um vetor Q de 10 posições (aceitar somente números positivos).
    Escrever a seguir o valor do maior elemento de Q e a respectiva posição
    que ele ocupa no vetor. */

    int vetor[SIZE], maior = 0, p;

    for(int i = 0; i < SIZE; i++) {
        printf("\n%iº valor\n>>> ", i+1);
        scanf("%i", &vetor[i]);

        if(vetor[i] > 0) {
            vetor[i] = vetor[i];
            if(vetor[i] > maior) {
                maior = vetor[i];
                p = i;
            }
        }
    }

    printf("\nMaior Valor %i\nPosição [%i] - correspondente ao valor [%i]", maior,p, p + 1);

    return 0;
}