#include<stdio.h>

int ImprimiMatricula(int qtd) {

    int matricula;

    for(int i = 0; i <= qtd; i++) {
        printf("\n\nInforme a matrícula\n>>> ");
        scanf("%i", &matricula);
        printf("\n\nMatricúla: %d", matricula);
    }
}

int main() {

    int qtd_alunos;

    printf("\nInforme a quantidade de alunos\n>>> ");
    scanf("%i", &qtd_alunos);

    ImprimiMatricula(qtd_alunos);
}