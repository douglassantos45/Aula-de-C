#include<stdio.h>


int somarValores(int vetor[], const int n) {

    int soma = 0;
    int *ponteiro;
    int *const finalVetor = vetor + n; //Passando para o finalVetor a posição do último elemento do vetor

    for(ponteiro = vetor; ponteiro < finalVetor; ponteiro++) {
        //Passando o valor para soma
        soma += *ponteiro;
    }

    return soma;

}


int main(void) {

    int somarValores(int vetor[], const int n);
    int vetor[10] = {5, 5, 5, 5, 5, 5, 5, 5, 5, 5};

    printf("\nSoma do vetor = %i", somarValores(vetor, 10)); //10 é o tamanho do vetor

    printf("\n\n");

    return 0;
}