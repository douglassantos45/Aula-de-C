#include<stdio.h>

struct lista {

    int valor;
    struct lista *proximo;

};

struct lista *procurarValor(struct lista *ponteiroLista, int valor) {

    //Faça enquanto o ponteiro seja diferente de nulo
    while(ponteiroLista != (struct lista *) 0) {
        
        //Verificar se o valor digitado corresponde ao valor da estrutura lista
        if(ponteiroLista->valor == valor) {
            return (ponteiroLista);

        } else {
            //Trocando o valor do ponteiroLista para o próximo valor da struct
            ponteiroLista = ponteiroLista->proximo; 
        }

        //Retornando valor nulo
        return (struct lista *) 0;
    }

}


int main () {

    struct lista *procurarValor(struct lista *ponteiroLista, int valor);
    struct lista m1, m2, m3;
    struct lista *resultado, *gancho = &m1;

    int valor = 0;

    //Preencher os valores da struct

    m1.valor = 10;
    m2.valor = 20;
    m3.valor = 30;

    //Lista, fazendo os valores apontarem para os outros valores

    m1.proximo = &m2;
    m2.proximo = &m3;
    m3.proximo = (struct lista *) 0; //Null


    printf("\nProcurar valor: ");
    scanf("%i", &valor);

    //Chamando a função e retornando o valor para resultado

    resultado = procurarValor(gancho, valor);


    if(resultado == (struct lista*) 0) {
        printf("\nResultado %i, não encontrado!\n", valor);
    } else {
        printf("\nResultado %i, encontrado!\n", resultado->valor);
    }

    return 0;
}