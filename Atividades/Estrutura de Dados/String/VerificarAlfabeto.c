#include<stdio.h>
#include<stdbool.h>

int main () {

    void alfabeto(char string);

    char nome[20];
    printf("Digite uma palavra: ");
    scanf("%s", &nome);

    short i = 0;
    while(nome[i] != '\0') {
        alfabeto(nome[i]);
        i++;
    }

    return 0;
}

void alfabeto(char string){

    if((string >= 'a' && string <= 'z') || (string >= 'A' && string <= 'Z')) {
        printf("\n%c É uma letra", string);
    } else {
        printf("\n%c Não é uma letra", string);
    }
    

}