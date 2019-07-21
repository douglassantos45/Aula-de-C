#include<stdio.h>
#include<stdlib.h>

struct Componente{

    char tipo[20],
         referencia[4],
         unidade[10];
    int valor;
    unsigned char num_ref;

} componente; 

int main(int args, const char *argv[]){

    printf("\nTipo do componente_____________: ");
    fflush(stdin);
    fgets(componente.tipo, 20, stdin);

    printf("\nReferência do componente_____________: ");
    fflush(stdin);
    fgets(componente.referencia, 4, stdin);

    printf("\nNúmero da Referência_____________: ");
    scanf("%c", &componente.num_ref);

    printf("\nValor do Componente_____________: ");
    scanf("%d", &componente.valor);

    printf("\nUnidade_____________: ");
    fflush(stdin);
    fgets(componente.unidade, 10, stdin);

    printf("\n\nComponentes Criados\n\n");
    printf("\nTipo: %s\nReferência: %s\nNº de Referências\nValor: %i\nUnidade: %s\n", componente.tipo,componente.referencia, componente.num_ref,componente.valor,componente.unidade);

}