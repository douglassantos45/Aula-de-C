#include<stdio.h>
#include<stdlib.h>

#define MAX_SIZE 10
#define TRUE  1
#define FALSE 0

/*Dada uma seqüência de operações push e pop e de um inteiro representando o tamanho de um vetor no qual uma pilha deve ser implementada, elabore um algoritmo para determinar a ocorrência ou não de estouro. O algoritmo não deverá usar uma pilha. Implemente o algoritmo como um programa em C.*/

typedef struct { 
    int vector[MAX_SIZE];
    int totalE;

} VECTOR;

void initVector(VECTOR *v) {
    v->totalE = 0;
}

int overFlow(VECTOR *v) {
    return(v->totalE == MAX_SIZE);
}

void push(VECTOR *v, int element) {
    if(overFlow(v) == TRUE){
        printf("ERR: VECTOR IS FULL!!\n");
    } else {
        v->vector[v->totalE] = element;
        v->totalE++;
    }
}

int main(int argc, char const *argv[]) {

    VECTOR v;

    initVector(&v);

    for(int i = 0; i < MAX_SIZE; i++) { 
        push(&v, i * 10 + 1);
    }

    for(int i = 0; i < MAX_SIZE; i++) {
        printf("%d\n", v.vector[i]);
    }

    push(&v, 30);

    return 0;
}
