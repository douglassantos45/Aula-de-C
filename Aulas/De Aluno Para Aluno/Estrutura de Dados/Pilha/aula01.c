#include<stdio.h>
#include<stdlib.h>

#define MAX_TAM 100

typedef struct {
    int item[MAX_TAM];
    int top;
} TStack;

/*INÍCIO FUNÇÕES PILHA*/

//Inicia a pilha
void stackInit(TStack *p) {
    p->top = -1;
}

//Verifica se a pilha está vazia
int stackEmpty(TStack *p) {
    if(p->top == -1) {
        return 1;
    }
    return 0;
}

//Verifica se a pilha está cheia
int stackFull(TStack *p) {
    if(p->top == MAX_TAM-1) {
        return 1;
    }
    return 0;
}

//Inseri valores
void stackInput(TStack *p, int value) {
    if(stackFull(p) == 1) {
        printf("ERRO: Pilha cheia");
    } else {
        //Inserindo o valor de VALUE na próxima posição do topo
        p->top++;
        p->item[p->top] = value;
    }
}

//Removendo valores
int stackRemove(TStack *p) {
    int aux;
    if(stackEmpty(p) == 1) {
        printf("ERRO: Pilha vazia");
    } else {
        aux = p->item[p->top];
        p->top--;
        return aux;
    }
} 

/*FIM FUNÇÕES PILHA*/


int main(int argc, char const *argv[]) {
    //Alocando espaço suficiente
    TStack *p = (TStack *) malloc(sizeof(TStack));

    stackInit(p);

    for(int i = 1; i < 10; i++) {
        stackInput(p, i);
    }

    int aux;

    aux = stackRemove(p);

    printf("\n REMOVE: %d", aux);//Removendo o último valor

    return 0;
}

