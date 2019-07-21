#include<stdio.h>

int main (int args, const char *argv[]) {

    //Sem ponteiros
    int x = 10;

    //Com ponteiro

    int *ponteiro;

    ponteiro = &x;

    printf("\nValor da variável X = %i", x);
    printf("\nEndereço de momória de X = %i", &x);
    printf("\nPonteiro do valor da varíavel X = %i", *ponteiro);
    printf("\nPonteiro no endereço de momória X = %i", ponteiro);

    int y = 10;

    y = 20;

    *ponteiro = y;

    printf("\nValor de X = %i\nValor de Y = %i", x, y);



    getchar();

}