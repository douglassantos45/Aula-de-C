#include<stdio.h>
#include<stdlib.h>

int main () {

    FILE *file;

    //A anexa informações no arquivo
    file = fopen("txt.txt", "a");

    if(file == NULL) {
        printf("\nConteúdo não encontrado!");
        getchar();
        exit(1);
    }

    //Escrevendo manualmente
    fprintf(file, "Testando");


    //Passando vetores de caracter
    char frases[] = "\nTestando novamente\n";
    fputs(frases, file);

    //Passando apenas um caracter
    char caractere = '3';
    fputc(caractere, file);

    fclose(file);

    return 0;
}