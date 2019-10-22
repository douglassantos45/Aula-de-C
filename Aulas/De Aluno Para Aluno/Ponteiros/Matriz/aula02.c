#include<stdio.h>
#include<stdlib.h>
#define N_LINHAS  2
#define N_COLUNAS 4

int main(int argc, char const *argv[]) {
    /* code */
    int **m;

    if(!(m = (int **) malloc(sizeof(int * N_LINHAS))))
    exit(1);

    for(int i = 0; i < N_LINHAS; i++) {
        if(!(m[i] = (int *) malloc (sizeof(int * N_COLUNAS))))
    }

    for(int i = 0; i < N_LINHAS; i++) {
        for(int j = 0; i < N_COLUNAS; j++) {
            m[i][j] = i + j * 10;
        }
    }

    return 0;
}
