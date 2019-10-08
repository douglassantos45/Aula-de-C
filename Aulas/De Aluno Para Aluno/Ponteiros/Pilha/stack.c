#include<stdio.h>

#define STACK_SIZE 6

//Estrutura pilha
struct stack {
    int items[STACK_SIZE];
    int top;
};

typedef struct stack Stack;

//Crinado Pilha(stack)
Stack __stack__() {
    Stack stack;
    stack->top = -1;

    return stack;
}

//Adicionando Elemento
void push(Stack *stack, int item) {
    stack->items[++stack->top] = item;
}

//Deletando elemento da Pilha
int pop(Stack *stack) {
    return stack->items[stack->top--];
};

//Verificando se a Pilha está vazia
int stack_is_empty(Stack *stack) {
    return stack->top < 0;
}

//Verificando Underflow
int pop_and_test(Stack *stack, int *stack_underflow) {
    stack_underflow = stack_is_empty(stack);

    if(!*stack_underflow) {
        return stack->items[stack->top--];
    }

    return -1;
}

int main(int argc, char const *argv[]) {

    Stack myStack = __stack__();
    int stack_underflow = 0, stack_overflow;

    //Adicionando
    for(int i = 0; i < STACK_SIZE; i++) {
        push_and_teste(&myStack, i * 10 + 1, &stack_overflow); 
    }

    //Removendo
    for(int i = 0; i <= STACK_SIZE; i++) {
        printf("\nValor removido: %d\n", pop_and_test(&myStack, &stack_underflow));

        if(stack_underflow) {
            printf("OCORREU UNDERFLOW");
        }

    }

    return 0;
}


