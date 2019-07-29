#include<stdio.h>
#include<string.h>

int main () {

    char nome[20];
    char caractere;
    int i = 0;

    do {
        
        caractere = getchar();
        nome[i] = caractere;
        i++;
        
    }while (caractere != '\n');//\n é o ENTER

    //Atribuindo o caracter nullo na ultima possição
    nome[i - 1] = '\0';

    printf("%s\n", nome);

    return 0;
}