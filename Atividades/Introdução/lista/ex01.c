#include<stdio.h>

int main(int args, const char *argv[]) {

    /*Faça um algoritmo para preencher automaticamente um vetor de 20
    posições, com os números pares entre 2 e 40 na ordem inversa. Depois
    mostrar os valores do vetor. */

    int vetor[20];

    for(int i = 40; i >= 2; i--) {
        vetor[i] = i;
        if(vetor[i] % 2 == 0) {
            printf("\nValor: [%i]", vetor[i]);
        }
    }

    return 0;
}