#include<stdio.h>
#include<math.h>
#include<ctype.h>

#define TAM 10

//Primeira Forma
void incrementaVetor(int v[], int tamanho) {
    for(int i = 0; i < tamanho; i++) {
        v[i]++;
    }
}

//Segunda Forma
void imprimeVetor(int *v, int tamanho) {
    for(int i = 0; i < tamanho; i++){
        printf("Valor: %i\nPosição: %i\n", v[i], i);
    }
}

int main(){

    int v[10];
    char msg
    for(int i = 0; i < TAM; i++) {
        v[i] = pow(i, 2);
    }

    imprimeVetor(v, TAM);
    printf("\nIncrementa vetor!\n");
    incrementaVetor(v, TAM);
    imprimeVetor(v, TAM);

    return 0;

}