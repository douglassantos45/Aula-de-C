#include<stdio.h>

void preecherVetor() {

    void ordenarVetor(int vet[]);

    int v1[7], v2[7], v3[17];

    for(int i = 0; i < 3; i++) {
        scanf("%i", &v1[i]);
    }

    for(int i = 0; i < 3; i++) {
        scanf("%i", &v2[i]);
    }

    for(int i = 0; i < 3; i++) {
        v3[i] = v1[i];
    }

    for(int i = 3; i < 6; i++) {
        v3[i] = v2[i - 3];
    }

    ordenarVetor(v3);
}


void ordenarVetor(int vet[]){

    int aux;

    for(int i = 0; i < 6; i++) {
        for(int j = i; j < 6; j++) {
            if(vet[j] < vet[i]) {
                aux = vet[j];
                vet[j] = vet[i];
                vet[i] = aux;
            }
        }
    }

    printf("\nVetor 3: ");

    for(int i = 0; i < 6; i++) {
        printf("[%i]", vet[i]);
    }

}

int main () {

    /*Faça um algoritmo que faça a união de dois vetores de tamanho 7, e
    mesmo tipo, em um terceiro vetor com dobro do tamanho. */
    
    preecherVetor();

    return 0;
}