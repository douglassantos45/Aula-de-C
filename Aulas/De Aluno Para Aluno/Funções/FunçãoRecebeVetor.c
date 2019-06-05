#include<stdio.h>

int main () {

    int vetor[10] = {1, 2, 5, 9, 3, 4, 7, 6, 8};
    int i;
    int OrdemCrescente (int valor[], int n);

    for(int i = 0; i < 10; i++) {
        printf("\n%i", OrdemCrescente(vetor, i));
    }
}


int OrdemCrescente (int valor[], int n) {
    int aux;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if(valor[i] > valor[j]) {
                aux = valor[i];
                valor[i] = valor[j];
                valor[j] = aux;
            }
        }
    }
}