#include<stdio.h>

int main () {

    FILE *file;

    int x, y, z;

    file = fopen("number.txt", "r");

    //Verificando se o ponteiro do arquivo existe
    if(file == NULL) {
        printf("\nArquivo não encontrado!");
        return 0;
    }

    //Passando os dados para as variáveis
    //Fscan não é recomendável
    fscanf(file, "%i %i %i", &x, &y, &z);

    printf("%i %i %i", x, y,z);

    fclose(file);

    return 0;

}