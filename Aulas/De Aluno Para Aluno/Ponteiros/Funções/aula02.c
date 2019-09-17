#include<stdio.h>

passandoPonteiro(int *ponteiro) {
    ++*ponteiro;
    printf("\nValor de Ponteiro durante a função: %d\n", *ponteiro);
}

int main() {

    int x = 0;
    
    printf("\nValor de X antes da função: %d\n", x);
    passandoPonteiro(&x);
    printf("\nValor de X depois da função: %d\n", x);

    return 0;
}