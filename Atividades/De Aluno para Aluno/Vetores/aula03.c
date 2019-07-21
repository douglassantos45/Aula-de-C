#include<stdio.h>

int main(int args, const char *argv[]){

    char nome[20][20];
    
    void mostrar(char string[]);

    for(int i = 0; i < 3; i++) {
        printf("\nInforme o %iº nome\n>>> ", i+1);
        scanf("%s", &nome[i]);
    }

    for(int i = 0; i < 3; i++) {
        printf("\nNome: %s", nome[i]);
    }

    mostrar(nome);

    return 0;
}

void mostrar(char string[]) {

    for(int i = 0; i < 3; i++) {
        printf("\nNome: %s", string[i]);
    }

}