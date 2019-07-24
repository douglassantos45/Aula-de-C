#include<stdio.h>

int main(int argc, char const *argv[]) {

    /*Faça um algoritmo para ler um valor N qualquer (que será o tamanho
    dos vetores). Após, ler dois vetores A e B (de tamanho N cada um) e
    depois armazenar em um terceiro vetor Soma a soma dos elementos do
    vetor A com os do vetor B (respeitando as mesmas posições) e escrever
    o vetor Soma. */
    
    int value;

    value = 3;

    int soma[value], vetorA[value], vetorB[value];

    for(int i = 0; i < 3; i++) {

        printf("\nA\n>>> ");
        scanf("%i", &vetorA[i]);
    }

    for(int i = 0; i < 3; i++) {
        printf("\nB\n>>> ");
        scanf("%i", &vetorB[i]);
        soma[i] = vetorA[i] + vetorB[i];            
        
    }

    for(int i = 0; i < 3; i++) {
        printf("\nSoma P.A: [%i] + P.B: [%i] = %i", vetorA[i], vetorB[i], soma[i]);
    }

    return 0;
}
