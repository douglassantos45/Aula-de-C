#include<stdio.h>

int main () {

    FILE *file;
    
    //W abrindo e escrevendo
    //file = fopen("txt.txt", "w");
    //R abrindo e lendo
    file = fopen("txt.txt", "r");                

    //Escrever no Arquivo
    fprintf(file,"Hello, World");

    //Fechar
    fclose(file);

    return 0;
}