#include<stdio.h>
#include<stdlib.h>
#include"pilha.h"
#include<malloc.h>

/*Escreva um programa que acumula n valores da sequência de Fibonacci em uma pilha.*/


/*int fibonacci(int *aux[]) {

    int a = -1, b = 1;

    for(int i = 0; i <= 5; i++) {
        aux[i] = a + b;
        a = b;
        b = aux[i];

        return aux[i];
    }
}*/

void listStack(TStack *p) {

    printf("List Stack: \"");

    for(int i = 0; i <= p->top; i++) {
        printf("%d ", p->pItem[i]);
    }
    printf("\"\n");
}

int main(int argc, char const *argv[]) {
    /* code */

    TStack *p = (TStack *)malloc(sizeof(int));

    stackInit(p, 10);

    int v[10];

    int a = -1, b = 1, n;

    printf("\nNº Sequência: ");
    scanf("%d", &n);

    for(int i = 0; i <= n; i++) {     
       v[i] = a + b;
       a    = b;
       b    = v[i];
       stackUp(p, v[i]);
       
    }

    listStack(p);

    return 0;
}
