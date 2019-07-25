#include<stdio.h>
#include<unistd.h>
#include<stdbool.h>

#define SIZE 10

bool validation = false;

void pesquisaMatricula(int mat[]) {

    int pesquisaMatricula;

    printf("\nPesquisar matricula\n>>> ");
    scanf("%i", &pesquisaMatricula);

    printf("\nPesquisando matrícula %i...", pesquisaMatricula);
    printf("\n");

    sleep(3);

    for(int i = 0; i < SIZE; i++) {

        if(mat[i] == pesquisaMatricula) {
            validation = true;
        }
    }

    if(validation == true) {
        printf("\nMatrícula encontrada!");
    }else {
        printf("\nMatrícula não encontrada!");
    }
    printf("\n\n\n");

}

int main () {

    /*Escreva um algoritmo que permita a leitura das matrículas de 10
    pessoas e armazene as matrículas lidas em um vetor. Após isto, o
    algoritmo deve permitir a leitura de mais 1 matrícula qualquer de pessoa
    e depois escrever a mensagem ACHEI, se a matrícula estiver entre as
    10 matrículas lidas anteriormente (guardados no vetor), ou NÃO ACHEI
    caso contrário. */

    int matricula[SIZE];

    for(int i = 0; i < SIZE; i++) {
        printf("\n%iº Matrícula\n>>> ", i + 1);
        scanf("%i", &matricula[i]);
    }

    pesquisaMatricula(matricula);

    return 0;
}