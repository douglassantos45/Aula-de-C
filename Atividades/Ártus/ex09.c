#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

#define MAX 100

/*Utilizando apenas operações de empilhar e desempilhar, faça uma função que conta o número de elementos de uma pilha que possuem valor par ou ímpar (a ser determinado pelo usuário). A pilha deve, ao fim da função, estar do mesmo que modo que estava antes da execuao da função.*/

typedef struct {
    int item[MAX],
        top;
} STACK;

void stackInit(STACK *p) {
    p->top = -1;
}

int emptyStack(STACK *p) {
    if(p->top == -1) {
        return 1;
    } 
    return 0;
}

int fullStack(STACK *p) {
    if(p->top == MAX-1){
        return 1;
    }
    return 0;
}

void stackUp(STACK *p, int value) {
    if(fullStack(p) == 1) {
        printf("ERR");
    } else {
        p->top++;
        p->item[p->top] = value;
    }
}

int unstack(STACK *p) {
    if(emptyStack(p) == 1) {
        printf("ERR");
    } else {
        int aux = p->item[p->top];
        p->top--;

        return aux;
    }
}

void printOut(STACK *p) {
    printf("List Stack: \"");
    for(int i = p->top; i >= 0; i--) {
        printf("[%d]", p->item[i]);
    }

    printf("\"\n");
}

int countValues(STACK *p) {
    int count = 0;
    for(int i = p->top; i >= 0; i--) {
        if(p->item[i] % 2 == 0) {
            count++;
        }
    }
    return count;
}

int main(int argc, char const *argv[]) {
    /* code */

    STACK *p = (STACK *)malloc(sizeof(int));

    stackInit(p);

    stackUp(p, 1);
    stackUp(p, 2);
    stackUp(p, 4);
    stackUp(p, 8);
    stackUp(p, 5);

    printOut(p);

    int count = countValues(p);
    printf("\nTotal de valores Pares: %d\n\n", count);
    
    printOut(p);
    
    return 0;
    
}


