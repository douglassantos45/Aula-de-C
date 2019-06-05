#include<stdio.h>

int main () {

    /*Ler um valor N e imprimir todos os valores inteiros entre 1 (inclusive) e N (inclusive).
    Considere que o N será sempre maior que ZERO.*/

    int N;

    scanf("%i", &N);

    if(N != 0) {
        for(int i = 1; i <= N; i++) {
            printf("\n%i", i);
        }
    } else return main();

    

}