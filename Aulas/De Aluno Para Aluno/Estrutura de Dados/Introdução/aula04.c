/********************************
 * ALOCAÇÃO COM STRUCT DA aula01
*/

#include<stdio.h>
#include<malloc.h>

#define ALTURA_MAXIMA 255 

//Declarando Struct
typedef struct {        
    /* data */
    int peso;
    int altura;

}PesoAltura;  
  

void main (void) {


    PesoAltura* pessoa = (PesoAltura*) malloc(sizeof(PesoAltura)); //Alocou em uma possição na memória
    pessoa->altura = 180; //A seta indica para pessoa ir na memória atribuir o valor pessoa = 180
    pessoa->peso = 80;


    //Exibindo os campos do struct
    printf("\nPeso: %i\nAltura: %i", pessoa->peso, pessoa->altura);


    //Estrutura de controle com define
    if(pessoa->altura > ALTURA_MAXIMA) {
        printf("\nAltura acima da máxima");
    } else {
        printf("\nAltura abaixo da máxima");
    }

    printf("\n\n");

}