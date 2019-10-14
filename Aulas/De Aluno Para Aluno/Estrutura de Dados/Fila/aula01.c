#include<stdio.h>

typedef struct {
    int inicio;
    int fim;
    int valores[10];
    int total;     

}FILA;

//Iniciando a fila
void create(FILA *f) {
    f->inicio = 0;
    f->fim    = 0;
    f->total  = 0;
}

//Inserindo elementos na fila
void inserir(FILA *f, int elemento) {
    f->valores[f->fim] = elemento;
    f->fim             = (f->fim + 1) % 10; //Pegar o resto da divisão dos elementos e pegar o 0 se for 10
    f->total++;
} 

//Removendo elementos na fila
int remover(FILA *f) {
    int elemento = f->valores[f->inicio];
    f->inicio    = (f->inicio + 1) % 10;
    f->total--;
}

//Verificando se a fila está vazia
int isEmpty(FILA *f) {
    return(f->total == 0);
}

//Verificando se a fila está cheia
int isFull(FILA *f) {
    return(f->total == 0);
}

int main(int argc, char const *argv[]) {
    /* code */
    return 0;
}
