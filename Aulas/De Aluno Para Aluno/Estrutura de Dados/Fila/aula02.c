#include<stdio.h>
#include<malloc.h>
#define MAX 10
#define True 1

typedef struct {
    int inicio;
    int fim;
    int valores[MAX];
    int total;
} FILA;

void iniciar(FILA *f) {
    f->inicio = 0;
    f->fim    = 0; // -1
    f->total  = 0;
}

void inserir(FILA *f, int elemento) {
    f->valores[f->fim] = elemento;
    f->fim             = (f->fim + 1) & MAX;
    f->total++;
}

int remover(FILA *f, int elemento) {
    elemento  = f->valores[f->inicio];
    f->inicio = (f->inicio + 1) & MAX;
    f->total--;
}

int isFull(FILA *f) {
    return(f->total == MAX);
}

int isEmpty(FILA *f) {
    return(f->total == 0);
}

/*
int isEmpty(FILA *f) {
    return f->fim < f->inicio;
}

int remove_isEmpty(FILA *f, int *underflow) {
    if(!(*underflow = isEmpty(f))){
        return f->valores[f->inicio++];
    }
    return -1;
}*/


int main(int argc, char const *argv[]) {
    /* code */

    FILA *f = (FILA *) malloc (sizeof(int));

    for(int i = 0; i < MAX; i++) {
        inserir(f, i);
    }

    for(int i = 0; i < MAX; i++) {
        printf("\nPosição: %d, Valores: %d\n", i, f->valores[i]);
    }   

    return 0;
}
