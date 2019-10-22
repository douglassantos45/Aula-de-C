#include<stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[]) {
    /* code */
    int *v;

    if(!(v = (int *)malloc(sizeof(int) * 10))) {
        exit(1);
    }

    for(int i = 0; i < 10; i++) {
        v[i] = i * 10 + 1;
    }

    if(!(v = (int *)malloc(v, sizeof(int) * 20))) {
        exit(1);
    }

    for(int i = 0; i < 10; i++) {
        v[i] = i * 20 + 1;
    }
    for(int i = 0; i < 20; i++) {
        printf("Posição: %d valor: %d\n", i, v[i]);
    }

    return 0;
}
