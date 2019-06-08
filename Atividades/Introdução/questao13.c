
#include "stdio.h"
#define LIMI10 11

int n = 0;

int Tab(int x) {
    if(n > 0 && n < LIMI10) for(int i = 1; i < LIMI10; i++) printf("\n%i x %i = %i", i, n, i * n);
    else return 0;
}

int main() {

    /*Ler um valor inteiro (aceitar somente valores entre 1 e 10) e escrever a tabuada de 1 a 10 do
    valor lido.*/

    scanf("%i", &n);

    Tab(n);

}