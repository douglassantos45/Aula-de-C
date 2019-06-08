#include<stdio.h>

int main () {

    /*Ler dois valores (considere que não serão lidos valores iguais) e escrevê-los em ordem crescente.*/

    int OrdenaValores(int z, int d);
    int a, b;
    
    printf("\nInforme o 1º valor\n>>> ");
    scanf("%i", &a);
    printf("\nInforme o 2º valor\n>>> ");
    scanf("%i", &b);

    OrdenaValores(a, b);

}

int OrdenaValores(int z, int d) {
    int aux = 0;
    if(z < d) { aux = z; z = d; d = aux;
    } if(d < z) { aux = d; d = z; z = aux;
    } else {
        printf("\nValores Iguais!!");
        return main();
    }
    printf("\n%i %i", z, d);
}