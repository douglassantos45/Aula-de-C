#import <stdio.h>

int main (void) {

    int num1, num2, resultado;

    num1 = 20; num2 = 10; resultado = 0;

    (num1 > num2) ? printf("\n%i maior que %i", num1, num2) : printf("\n%i maior", num2);

    num1 < num2 ? (resultado = 10) : (resultado = -10);

    return 0;
}