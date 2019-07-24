#include<stdio.h>

int main() {

    /*Escrever um algoritmo que lê um vetor N(20) e o escreve. Troque, a
    seguir, o 1º elemento com o último, o 2º com o penúltimo etc. até o 10º
    com o 11º e escreva o vetor N assim modificado. */

    //1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 

    
    void trocarElemento(int v[]);
    int v[20];

    for(int i = 1; i <= 20; i++) {
        scanf("%i", &v[i]);
    }

    trocarElemento(v);

    return 0 ;
}

void trocarElemento(int v[]) {
    
    for(int i = 20; i > 10; i--) {
        printf("\n%i", v[i]);
    }
}