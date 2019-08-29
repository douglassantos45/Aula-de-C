#include<stdio.h>

void copiarString(char *copiarValor, char *colarValor){

    while(*copiarValor != '\0') {
        *colarValor = *copiarValor;
        copiarValor++;
        colarValor++;
    }
    
    //Passando o caracter nulo para a string2
    colarValor = '\0';
}


int main(void) {

    void copiarString(char *copiarValor, char *colarValor);

    char string1[] = "Passando o valor para outra string";
    char string2[100];

    copiarString(string1, string2);

    printf("\n%s", string2);

    printf("\n\n");

    return 0;
}