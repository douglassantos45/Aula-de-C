#include<stdio.h>

int main () {

    struct lista {
        int valor;
        struct lista *proximo;
    };

    struct lista m1, m2, m3;

    struct lista *gancho = &m1; //Atribuindo ao gancho o valor do endereço de memória de m1

    m1.valor = 10;
    m2.valor = 20;
    m3.valor = 30;
    
    //Aprontando para o endereço de memória

    m1.proximo = &m2;
    m2.proximo = &m3;
    m3.proximo = (struct lista *) 0; //Endereço nulo

    //Imprimindo os valores

    while(gancho != (struct lista *) 0) {
        printf("\n%i", gancho->valor);
        gancho = gancho->proximo; //Acessa o próximo elemento  
    }

    return 0;
}