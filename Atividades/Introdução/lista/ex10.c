#include<stdio.h>

int main () {

    /*Faça um algoritmo para preencher um vetor de 10 posições, depois
    ordenar os elementos desse vetor em ordem crescente e mostrar o
    vetor */


    void ordenarVetor(int v[]);
    int v[10];

    for(int i = 0; i < 4; i++) {
        printf("\nInforme o %iº valor\n>>> ", i + 1);
        scanf("%i", &v[i]);
    }

    ordenarVetor(v);

    
}

void ordenarVetor(int v[]) {

    int aux;

    void exibirVetorOrdenado(int v[]);

    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 3; j++) {
            if(v[j] > v[i]) {
                aux = v[j];
                v[j] = v[i];
                v[i] = aux;
            }
        }
    }

    exibirVetorOrdenado(v);

}

void exibirVetorOrdenado(int v[]) {

    printf("\n_____________________\n");
    printf("\nVetor ordenado!\n");

    for(int i = 0; i < 4; i++) {
        printf("\n[%i]", v[i]);
    }

    printf("\n\n");
}