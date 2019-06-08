#include<stdio.h>
#define count 10

int main () {

    /*Escreva um algoritmo para imprimir os números de 1 (inclusive) a 10 (inclusive) em ordem
    decrescente.*/

    printf("\nOrdem Crescente\n");
    for (int i = 1; i <= count; i++){
        /* code */
        printf("\n%i", i);
    }
    printf("\n\nOrdem Decrescente\n");
    for (int j = count; j >= 1; j--){
        /* code */
        printf("\n%i", j);
    }
    
    
}