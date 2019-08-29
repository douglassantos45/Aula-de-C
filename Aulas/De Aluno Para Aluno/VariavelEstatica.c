#include<stdio.h>

int main () {

    void VariavelStatic (void);

    VariavelStatic();
    VariavelStatic();
    VariavelStatic();

    return 0;
}

void VariavelStatic (void) {

    //Variável norma é alocada na memória toda vez que a função for chamada, por isso ela sempre vale 4
    int variavelAutomatica = 2;
    variavelAutomatica *= 2;


    //Static é uma variável que é alocada na memoria uma unica vez, não precisando ser recriada.
    static int varialveEstatica = 2;
    varialveEstatica *= 2;

    printf("\nVariável Automatica %i", variavelAutomatica);
    printf("\nVariável Estática %i", varialveEstatica);
}