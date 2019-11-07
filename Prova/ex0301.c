#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct lista{
    char nome[100];
    int  idade;
    struct lista *prox;
} Lista;

typedef struct fila{
    Lista *inicio, *fim;
} Fila;


//aloca memória para a fila e retorna um ponteiro do tipo fila
Fila* criarFila(){
    Fila *f = (Fila *)malloc(sizeof(Fila));
    f->inicio = NULL;
    f->fim = NULL;

    return f;
}

void inserirFila (Fila *f, char* nome, int idade){
    Lista *novoNo = (Lista *)malloc(sizeof(Lista));
    strcpy(novoNo->nome, nome);
    novoNo->idade = idade;
    novoNo->prox = NULL;

    if(isEmpty(f)) {
        f->inicio = novoNo;
    }
    else {
        f->fim->prox = novoNo;
    }

    f->fim = novoNo;
}

void imprimirFila ( Fila *f ){
    Lista *aux;
    int i = 1;

    if (!isEmpty(f)) {
        for ( aux = f->inicio; aux != NULL; aux = aux->prox) {
            printf ("Aeronave %d: %s %i\n", i++, aux->nome, aux->idade);
        }
    }
    else{
        printf ("Nao há Aeronaves");
    }
    
}

void removerFila(Fila *f){
    Lista *aux = f->inicio;

    if (!isEmpty(f)) {
        f->inicio = aux->prox;
        printf("Aronave: %s \n", aux->nome);
        free (aux);

        if(f->inicio == NULL ) {  // vai entrar se houvesse apenas uma aeronave na lista
            f->fim = NULL;
        }   
    }
    else {
        printf("Nao há Aeronaves\n");
    }
}

int  isEmpty( Fila *f){
    return ( f->inicio == NULL );
}

int main() {
    Fila *fila = criarFila();
    char nome [1000];
    int idade;
    
    printf("\nNome: ");
    scanf("%s", &nome);

    printf("\nIdade: ");
    scanf("%i", &idade);

    inserirFila(fila, nome, idade);

    imprimirFila(fila);
}