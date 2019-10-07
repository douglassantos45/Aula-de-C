/*EMPLEMENTAÇÃO ESTÁTICA*/

/*
  - O espaço de memória é alocado no momento da compilação
  - Exige a definição DO número máximo de elementos da "Pilha"
  - Acesso sequencial: elementos consecutivas na memória
*/

//Prótotipos das funções
#include<stdio.h>
#define MAX 100

struct student{
    int registration;
    char name[30];
    float n1, n2, n3;
};
//Definindo nome da estrutura pilha
typedef struct stack Stack;

struct stack{
    int qtd;
    struct student date[MAX];
};

Stack *pi;

//Cria pilha
Stack* createStack() {
    Stack *pi;
    pi = (Stack *) malloc(sizeof(struct stack));

    if(pi != NULL) {
        pi->qtd = 0;
    }

    return pi;
}


//Liberar Pilha na memória
void freeStack(Stack* pi) {
    free(pi);
}

//Verificar tamanho da pilha
int sizeStack(Stack* pi) {
    if(pi == NULL) {
        return -1;

    } else {
        return pi->qtd;
    }
}

//Verificando se a pilha está cheia
int fullStack(Stack* pi) {
    if(pi == NULL) {
        return -1;
    } else {
        return (pi->qtd == MAX);
    }
}

//Adicionado um elemento da Pilha
int addElements(Stack* pi, struct student al) {
    if(pi == NULL)
        return 0;
    if(fullStack(pi))
        return 0;
    pi->date[pi->qtd] = al;
    pi->qtd++;
    
    return 1;
}

//Removendo um elemento da pilha
int removeElements(Stack* pi) {
    if(pi == NULL || pi->qtd = 0) {
        return 0;
    } 
    pi->qtd--;

    return 1;
}

//Consultar pilha
int consulStackTop(Stack* pi, struct student *al){
    if(pi == NULL || pi->qtd == 0){
        return 0;
    }
    *al = pi->date[pi->qtd-1];
    
    return 1;
}

int main(int argc, char const *argv[]{
    
    //Programa principal pi substitui por valor
    pi = createStack();
    freeStack(pi);
    int x = sizeStack(pi);
    int y = fullStack(pi);
    if(fullStack(pi));
    int z = addElements(pi, 3);//Três é o dado do aluno
    int a = removeElements(pi);
    int b = consulStackTop(pi, &3); //Dado do aluno

    return 0;
}
