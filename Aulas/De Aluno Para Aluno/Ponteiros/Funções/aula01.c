#include<stdio.h>

int main () {

    void testeVariavel(int x);
    void testePonteiro(int *pX);

    int teste = 1;
    int *pTeste = &teste; //Receber o endereço de memória da variável teste

    testeVariavel(teste);
    testePonteiro(pTeste);

    printf("\n%i\n", teste);

    return 0;
}

void testeVariavel(int x) {
    ++x; //Cópia da variável Teste, são variáveis independentes
    printf("\n%i\n", x);
}

void testePonteiro(int *pX) {
    ++*pX; //Adicionando mais um ao valor do ponteiro sem precisar fazer uma cópia da variável teste
}