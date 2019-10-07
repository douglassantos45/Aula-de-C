typedef struct {
    int top, 
        size;
    int *pItem;

} TStack;

//Inicia pilha
void stackInit(TStack *p, int size) {
    p->top = -1;
    p->size = size;
    p->pItem = (int *) malloc (size* sizeof(int));
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

//Retorna top pilha
int returnTop(TStack *p){
    return p->pItem[p->top];
}

//Imprimir pilha
void printOut(TStack *p) {

    printf("List Stack: \"");

    for(int i = p->top; i>= 0; i--) {
        printf("[%d]", p->pItem[i]);
    }
    printf("\"\n");
}