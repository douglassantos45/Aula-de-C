#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct {
    char nome[100];
    char rg[11];
    char dataNascimento[14];
}Pessoa;


criarPessoa(char nome[], char rg[], char dataNascimento[]) {
    
    Pessoa p;

    strcpy(p.nome, nome);
    strcpy(p.rg, rg);
    strcpy(p.dataNascimento, dataNascimento);

    return p;
}

int main(int argc, char const *argv[]) {
    
    Pessoa pessoa;

    pessoa = criarPessoa("Jose", "230421423", "10/10/1970");

    printf("%s %s %s", pessoa.nome, pessoa.rg, pessoa.dataNascimento);
}