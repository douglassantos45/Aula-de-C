#include<stdio.h>

int main (int args, const char *argv[] ) {

    int x = 10;
    double y = 20.50;
    char z = 'a';

    int *pX = &x;
    double *pY = &y;
    char *pZ = &z;

    //Somando os valores dos ponteiros
    float soma = *pX + *pY;

    printf("\nEndereço de X = %i\nValor de X = %i", pX, *pX);
    printf("\nEndereço de Y = %i\nValor de Y = %f", pY, *pY);
    printf("\nEndereço de Z = %i\nValor de Z = %c", pZ, *pZ);
    printf("\nSoma dos ponteiros de X e Y = %.2f", soma);

    getchar();

    return 0;
}