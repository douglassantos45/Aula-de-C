#include "stdio.h"

int main() {
    
    /*Leia 100 valores inteiros. Apresente então o maior valor lido e a posição dentre os 100 valores lidos. */
    int valor, pos, maior = 0;

    for(int i = 0; i < 100; i++){
        scanf("%i", &valor);
        if(valor > maior) {
            maior = valor;
            pos = i + 1;
        }    
    }
    printf("\nMaior: %i\nPosição: %i", maior, pos);
}