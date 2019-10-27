#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

/*Utilizando somente operações de empilhar e desempilhar, escreva um programa que remove um item em uma posição, fornecida pelo usuário, da pilha. Ao final da execução da função, a pilha deverá ser igual à original, exceto pela ausência do item removido.*/

typedef struct {
    int top, 
        size;
    int *pItem;

} TStack;

//Inicial um pilha
void stackInit(TStack *p, int size) {
    p->top = -1;
    p->size = size;
    p->pItem = (int *) malloc (size * sizeof(int));
}

//Empilha
void stackUp(TStack *p, int value) {
    p->top++;
    p->pItem[p->top] = value;
}

//Desempilha
int unstack(TStack *p, int value) {
    int aux = p->pItem[value];
    p->top--;
    return aux;
}

//Verifica pilha vazia
int emptyStack(TStack *p) {
    if(p->top == -1) {
        return 1;
    }
    return 0;
}

//Verifica pilha cheia
int fullStack(TStack *p) {
    if(p->top == p->size - 1) {
        return 1;
    }
    return 0;
}

//Imprimir pilha
void printOut(TStack *p) {

    printf("List Stack: \"");

    for(int i = p->top; i>= 0; i--) {
        printf("[%d]", p->pItem[i]);
    }
    printf("\"\n");
}

//Função principal
int main(int argc, char const *argv[]) {
    
    TStack myStack; 
    int capacity, op, value;

    printf("\nReport battery capacity: ");
	scanf("%d", &capacity);

    stackInit(&myStack, capacity);

    while(1) {
        printf("\n[1] - StackUp");
        printf("\n[2] - Unstack");
        printf("\n[3] - Show Stack");
        printf("\n[4] - Exit");
        printf("\n>>> ");
        scanf("%i", &op);

        if(op == 1) {
            /* code */
            if(fullStack(&myStack) == 1) {
                printf("\nERR: FULL STACK! \n");
            } else {
                printf("\nInput value: ");
                scanf("%d", &value);
                stackUp(&myStack, value);
            }
                
        } else if (op == 2) {
            /* code */
            if(emptyStack(&myStack) == 1) {
                printf("\nERR: EMPYT STACK!\n");
            } else {
                int v;
                printf("\nInput Value: ");
                scanf("%d", &v);
                value = unstack(&myStack, v);
                printf("\n%d UNSTACK!", value);
            }

        } else if (op == 3) {
            /* code */
            if(emptyStack(&myStack) == 1) {
                printf("\nERR: EMPYT STACK!\n");
            } else {
                printOut(&myStack);
            }
            
        } else {
            /* code */
            exit(0);
            printf("\nERR: INVALID OPTION!");
        }
    }
    
    return 0;
}
