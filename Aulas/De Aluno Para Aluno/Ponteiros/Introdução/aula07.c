#include<stdio.h>
#include<stdlib.h>
#define SIZE 10

int main(int argc, char const *argv[]) {

    int *v;

    if(!(v = (int *) malloc (sizeof(int) * SIZE))) {
        exit(1);
    }

    for(int i = 0; i < SIZE; i++) {
        v[i] = i * 10 + 1;
    }

    for(int i = 0; i < SIZE; i++) {
        printf("Posição: %d Valor: %d\n", i, v[i]);
    }

    return 0;

}