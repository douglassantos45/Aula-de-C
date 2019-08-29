#include<stdio.h>

#define MAIOR(x, y) x > y ? x : y
#define CARACTER_MINUSCULO(char) char >= 'a' && char <= 'z' //Retorna True ou False

int main (void) {

    char x = 'a';

    //Testando Macro CARACTER_MINUSCULO
    if (CARACTER_MINUSCULO(x)) {
        printf("\nÉ uma letra minuscula\n");
        
    } else {
        printf("\nNão é uma letra minuscula\n");
    }

    //Testando Macro MAIOR
    printf("%i\n", MAIOR(10, 40));

    return 0;
}