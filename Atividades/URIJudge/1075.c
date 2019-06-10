#include<stdio.h>

int main() {
    
    /*Leia um valor inteiro N. Apresente todos os números entre 1 e 10000 que divididos por N dão resto igual a 2.

    Entrada
    A entrada contém um valor inteiro N (N < 10000).

    Saída
    Imprima todos valores que quando divididos por N dão resto = 2, um por linha. */

    int n;
    scanf("%i", &n);

    for(int i = 1; i < 100; i++) {
        if(i % n == 2) {
            printf("\n%i", i);
        } else {
            continue;
        }
    }

}