#include<stdio.h>
#include<string.h>

#define SIZE 200

void exibeLInha(){
    for(int i = 0; i < 15; i++) {
        printf("_");
    }printf("\n");
}

int main (int args, char const *argv[]) {

    char nome[SIZE][SIZE];

    for(int i = 0; i < 3; i++) {
        exibeLInha();
        printf("\nInforme o %i nome\n>>> ", i+1);
        scanf("%s", &nome[i]);
    }
    exibeLInha();
    for(int i = 0; i < 3; i++) {
        printf("\n%iº Nome %s", i+1, nome[i]);
    }

    return 0;

}