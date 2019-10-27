#include<stdio.h>

#define MAX_SIZE 20
#define True  1
#define False 0

/*Elabore um método para manter duas pilhas dentro de um único vetor linear de modo que nenhuma das pilhas incorra em estouro até que toda a momória seja usada, e uma pilha inteira nunca seja deslocada para outro local dentro do vetor. Escreva rotinas em C, push1, push2, pop1 e pop2, para manipular as duas pilhas. (Dica: as duas pilhas crescem na diração da outra)*/

typedef struct {
    int array[MAX_SIZE];
    int top1;
    int top2;
}DUBLESTACK;

void initDubleStack(DUBLESTACK *ds) {
    ds->top1 = -1;
    ds->top2 = MAX_SIZE;
}

int sizeDubleStack(DUBLESTACK *ds) {
    return ds->top1 + 1 + MAX_SIZE - ds->top2;
}

int overflow(DUBLESTACK *ds) {
    if(ds->top1 + 1 == ds->top2) return False;
}

int underflow(DUBLESTACK *ds) {
    if(ds->top1 == -1 || ds->top2 == MAX_SIZE) return False;
}

int insert(DUBLESTACK *ds, int stack, int value) {
    if(overflow(ds) == False) {
        printf("ERR: ");
    } else {
        if(stack < 1 || stack > 2) return False;
        
        if(stack == 1) {
            ds->array[ds->top1++] = value;
        } else {
            ds->array[ds->top2--] = value;
        }
    }
}

int remove(DUBLESTACK *ds, int stack) {
    if(underflow(ds) == False) {
        printf("ERR: ");
    } else {
        if(stack < 1 || stack > 2) return False;

        if(stack == 1) ds->top1--;
        else ds->top2++;    
    }
}

int main(int argc, char const *argv[])
{
    /* code */
    return 0;
}
