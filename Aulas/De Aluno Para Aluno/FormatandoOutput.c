#include<stdio.h>
#include<stdlib.h>

int main (void) {

    float Var2 = 10.145;
    int Var = 999999;

    printf("\nValor da Varável (%%i) = (%i)", Var);
    printf("\nValor da Varável (%%d) = (%d)", Var);
    printf("\nValor da Varável (%%x) = (%x)", Var); //Base Hexadecimal
    printf("\nValor da Varável (%%o) = (%o)", Var); //Base octal

    //Formatação de Floots
    printf("\n\n");
    printf("\nValor da Varável (%%f) = (%f)", Var2);
    printf("\nValor da Varável (%%e) = (%e)", Var2);
    printf("\nValor da Varável (%%a) = (%a)", Var2);
    printf("\nValor da Varável (%%g) = (%g)", Var2);

    printf("\n\nDelocando valores");
    printf("\nValor da Varável (%%i) = (%17i)", Var); // 17 na frente do % indica a casa de deslocamento

    printf("\n\n");

    system("pause");
    return 0;
} 