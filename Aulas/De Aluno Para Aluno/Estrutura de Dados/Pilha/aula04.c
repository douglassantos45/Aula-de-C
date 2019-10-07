/*IMPLEMENTAÇÃO ESTÁTICA*/
#include<stdio.h>
#include<malloc.h>
#define MAX 100

#define true 1
#define false 0
typedef int bool;

typedef struct {
    int key;
} REGISTRO;

typedef struct {
    REGISTRO array[MAX];
    int top;
} PILHA;


void inicializarPilha(PILHA* p) {
    p->top = -1;
}

int tamnhoPilha(PILHA* p) {
    return p->top + 1;
}

void exibirPilha(PILHA* p) {
    printf("Pilha: \" ");
    for(int i = p->top; i >= 0; i--) {
        printf("%i ", p->array[i].key);
    }
    printf("\"\n");
}

bool inserirElemento(PILHA* p, REGISTRO reg) {
    if(p->top >= MAX-1){
        return false;
    }
    p->top++;
    p->array[p->top] = reg;
    
    return true;
}

bool excluirElemento(PILHA* p, REGISTRO* reg) {
    if(p->top == -1) {
        return false;
    }
    *reg = p->array[p->top];
    p->top--;

    return true;
}

void reinicializarPilha(PILHA* p) {
    p->top = -1;
}

int main(int argc, char const *argv[]) {
    /* code */

    PILHA* p = (int *)malloc(sizeof(int));
    
    inicializarPilha(p);

    inserirElemento(p, p->array[0]);//Função com erro

    exibirPilha(p);

    return 0;
}
