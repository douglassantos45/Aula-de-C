#include<stdio.h>
#include<stdlib.h>

/*Implemente uma função chamada stack top que mostra o valor no topo da pilha, sem removê-lo.*/

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
int emptyStack(TStack *p) {
    if(p->top == -1) {
        return 1;
    }
    return 0;
}

//Verifica se a pilha está cheia
int fullStack(TStack *p) {
    if(p->top == MAX_TAM-1) {
        return 1;
    }
    return 0;
}

//Inseri valores
void stackUp(TStack *p, int value) {
    if(fullStack(p) == 1) {
        printf("ERR: Full Stack");
    } else {
        //Inserindo o valor de VALUE na próxima posição do topo
        p->top++;
        p->item[p->top] = value;
    }
}

//Removendo valores
int unstack(TStack *p) {
    int aux;
    if(emptyStack(p) == 1) {
        printf("ERR: Empty Stack ");
    } else {
        aux = p->item[p->top];
        p->top--;
        return aux;
    }
}

//Retornando Topo
int returnTop(TStack *p) {
    return p->item[p->top];
}

/*FIM FUNÇÕES PILHA*/


int main(int argc, char const *argv[]) {
    //Alocando espaço suficiente
    TStack *p = (TStack *) malloc (sizeof(TStack));

    stackInit(p);//Iniciando a pilha

    for(int i = 1; i < 10; i++) {
        stackUp(p, i);
    }
    
    printf("\nPRINT TOP: %d", returnTop(p));

    return 0;
}

