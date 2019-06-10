#include "stdio.h"

int main() {

    /*Leia 2 valores inteiros X e Y. A seguir, calcule e mostre a soma dos números impares entre eles.
    O programa deve imprimir um valor inteiro. Este valor é a soma dos valores ímpares que estão entre os valores fornecidos na entrada que deverá caber em um inteiro.
    */

    int a, b, n, aux, soma = 0;

    scanf("%i %i", &a, &b);

    if(a > b) { 
        aux = b; 
        b = a; 
        a = aux; 
    }

    if(a % 2 == 0) {
        a++;
        n = a; 
    } else {
        n = a + 2;
    }
    
    for(int i = n; i < b; i+=2) {
        soma += i;
    }

    printf("\n%i", soma);
}