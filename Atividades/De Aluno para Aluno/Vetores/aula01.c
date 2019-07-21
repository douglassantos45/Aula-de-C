#include<stdio.h>
#include<stdbool.h>

#define TAM 3

int main(int argc, char const *argv[]) {
    
    int notas[100];

    for(int i = 0; i < TAM; i++) {
        printf("\nInforme a nota do %iº aluno\n>>> ", i+1);
        scanf("%i", &notas[i]);
    }

    for(int j = 0; j < TAM; j++){
         printf("\nNotas %i", notas[j]);
        
    }

    return 0;
}
