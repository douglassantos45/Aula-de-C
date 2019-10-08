/**********************
 * Lista linear Sequencial
*/

#include<stdio.h>
#include<malloc.h>
#include<stdbool.h>

#define MAX 50

typedef int TIPOCHAVE;

typedef struct{
    TIPOCHAVE chave;
}REGISTRO;

typedef struct {
    REGISTRO ARRAY[MAX];
    int num_Elementos;
}LISTA; 


//INICIALIZAÇÃO DA ESTRUTURA - Começando com Elementos 0

void inicializarLita(LISTA* lista) {
    lista->num_Elementos = 0; //Informando que a lista está vazia
}


//RETORNANDO NÚMERO DE ELEMENTOS

int tamanho(LISTA* lista) {
    lista->num_Elementos;
}

//EXIBIR/IMPRIMIR VALORES DA LISTA

void imprimirLista(LISTA* lista) {
    int i;

    printf("\nLista: \" ");// \"" imprimi as áspas
 
    //Percorrendo a lista
    for (i = 0; i < lista->num_Elementos; i++) {
        printf("%i ", lista->ARRAY[i].chave); //Imprimir a chave do elemento atual
    }

    printf("\"\n");
}


//BUSCA SEQUENCIAL

int buscaSequencial(LISTA* lista, TIPOCHAVE cha) {
    int i;

    //Percorrendo a lista
    while (i < lista->num_Elementos) {
        if(cha == lista->ARRAY[i].chave) return i; //Estou verificando se CHA digitada é a mesma da lista em chave e retorno i
        else return i++;
    }

    return -1;
}


//INSERÇÃO(ADICIONANDO) DE UM ELEMENTO

_Bool inserirElemento (LISTA* lista, REGISTRO rg, int i) {
    
    //Verificando se o i digitado pelo usuário é válido e se a lista está vazia
    if(lista->num_Elementos == MAX || i < 0 || i > lista->num_Elementos) {
        return false;
    }
    for (int j = lista->num_Elementos; j > i; j--) {

        //Copiar o elemento de J para a ultima posição e inseri o elemento atual na possição J - 1
        lista->ARRAY[j] = lista->ARRAY[j-1];
    }

    lista->ARRAY[i] = rg; //Copiar o registro para o Arranjo
    lista->num_Elementos++; //Adiconando mais uma possição no elemento
    
    return true;

}


//EXCLUSÃO DE UM ELEMENTO

_Bool excluirElemento (TIPOCHAVE ch, LISTA* lista) {
    int posicao;

    posicao = buscaSequencial(lista, ch);
    
    if(posicao == -1) return false;
    
    for (int j = posicao; j < lista->num_Elementos; j--){
        lista->ARRAY[j] = lista->ARRAY[j + 1];
    }
    lista->num_Elementos--;

    return true;
    
}


//REINICIALIZAÇÃO DA ESTRUTURA

void reiniciarEstrutura (LISTA* lista) {
    lista->num_Elementos = 0;
}