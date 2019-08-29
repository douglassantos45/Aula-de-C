#include<stdio.h>
#include<stdlib.h>

//Lendo conteúdo do aquivo

int main () {

    FILE *file;

    file = fopen("notas.txt", "r");

    //Verificando o arquivo
    if(file == NULL){
        printf("\nAquivo não encontrado!");
        getchar();
        exit(0);
    }

    char frase[100][50];

    //fgets sempre retornará uma String
    while(fgets(frase, 100, file) != NULL){
        printf("\n%s", frase);
    }

    fclose(file);
}