#include <stdio.h>
#define A 25.0000
#define B 50.0000
#define C 75.0000
#define D 100.0000
int main()
{

    /*
    Você deve fazer um programa que leia um valor qualquer e apresente uma mensagem dizendo em qual dos seguintes intervalos ([0,25], (25,50], (50,75], (75,100]) este valor se encontra. Obviamente se o valor não estiver em nenhum destes intervalos, deverá ser impressa a mensagem “Fora de intervalo”.

    O símbolo ( representa "maior que". Por exemplo:
    [0,25]  indica valores entre 0 e 25.0000, inclusive eles.
    (25,50] indica valores maiores que 25 Ex: 25.00001 até o valor 50.0000000
    */

    float number = 0;

    printf("\n>>> ");
    scanf("%f", &number);

    if (number >= 0 && number <= A){
        printf("\nIntervalo [0,%g]\n", A);
    }
    else if (number > A && number <= B){
        printf("\nIntervalo (%g,%g]\n", A, B);
    } 
    else if (number > B && number <= C) {
        printf("\nIntervalo (%g,%g]\n", B, C);
    } 
    else if (number > C && number <= D) {
        printf("\nIntervalo (%g,%g]\n", C, D);
    } else {
        printf("\nFora do Intervalo\n");
    }

}