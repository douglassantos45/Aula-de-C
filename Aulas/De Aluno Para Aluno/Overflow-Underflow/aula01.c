#include<stdio.h>

int main () {

    short n1 = 23421452423; //Overflow - Transbordamento do valor
    short n2 = -23421346524; //Underflow - Estouro negativo

    //Imprimindo os valores em Short
    printf("\n%i\n%i", n1, n2);

    int n3 = 234214124143;
    int n4 = -23415634542;

    //Imprimindo os valores 
    printf("\n%i\n%i", n3, n4);


    return 0;
}