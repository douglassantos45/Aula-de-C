#include<stdio.h>

int main () {
    /*Ler dois valores (considere que não serão lidos valores iguais) e escrever o maior deles.*/

    int VerificarValores(int x, int y);
    int n1, n2;

    printf("\nInforme o 1º valor\n>>> ");
    scanf("%i", &n1);
    printf("\nInforme o 2º valor\n>>> ");
    scanf("%i", &n2);

    VerificarValores(n1, n2);
}

int VerificarValores(int x, int y) {
    if(x == y){
        printf("\nValores iguais\n");
        return main();
    }
    (x > y) ? printf("\nO valor %i é maior", x)
    : printf("\nO valor %i é maior", y);
    
}