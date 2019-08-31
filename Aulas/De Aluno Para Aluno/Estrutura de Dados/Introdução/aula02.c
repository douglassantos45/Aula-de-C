#include<stdio.h>

#define ALTURA_MAXIMA 255 //Define uma constante

//Declarando Struct
typedef struct {        //typedef significa (define o nome)
    /* data */
    int peso;
    int altura;

}PesoAltura;            // Nome do Strutc

typedef int CHAVE;      //Estou chamando o tipo inteiro(int) de CHAVE

/*ex
CHAVE idade; Idade do tipo inteiro usando typedef*/ 

void main (void) {


    //Acessando os campos do struct
    PesoAltura pessoa;         //Como se fosse um instância PessoAltura para pessoa
    pessoa.altura = 180;       //Atribuindo valor a altura
    pessoa.peso = 80;          //Atirbuindo valor a peso

    //Exibindo os campos do struct
    printf("\nPeso: %i\nAltura: %i", pessoa.peso, pessoa.altura);


    //Estrutura de controle com define
    if(pessoa.altura > ALTURA_MAXIMA) {
        printf("\nAltura acima da máxima");
    } else {
        printf("\nAltura abaixo da máxima");
    }

    printf("\n\n");

}