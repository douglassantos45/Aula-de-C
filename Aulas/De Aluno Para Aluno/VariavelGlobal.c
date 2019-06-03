#include<stdio.h>

//Declarando variável Global

int gVarivalGlobal = 10; //Variável Global se comporta como Static

int main () {

    void teste (void);

    teste();
    teste();
    teste();

    printf("\n%i", gVarivalGlobal);

    printf("\n\n");
}

void teste (void) {

    gVarivalGlobal *= 2;
    printf("\n%i", gVarivalGlobal);
}
