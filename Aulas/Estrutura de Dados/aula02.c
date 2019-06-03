/*****************
 * PONTEIRO E ALOCAÇÃO
*/

#include<stdio.h>
#include<malloc.h> //Alocação de Memória, serve para verificar a quantidade de byts
int main () {

    int x = 25;
    int* y = &x;        // (*)Signiifica um indereço da memória de determinada variável. Aqui estou                                 atribuido a (Y) a possição na momória de X
    *y = 30;            //Atribuindo a variável X o valor 30

    printf("\nPosição de X: %i", &x);//
    printf("\nValor de X modificado por Y: %i\nValor da posição de X em Y: %i", x, y);


    //FUNÇÃO MALLOC

    int* a = (int*) malloc(sizeof(int));    //Estou apontando para a memória do tipo inteiro o tamanho que                                           ela corresponde
    *a = 20;
    int z = sizeof(int);                    //Informar a quantidade de bits, se for 32 retornará 4 byts,                                             se for 62 o dobro

    printf("\nValor de A: %i\nValor de Z: %i", a, z);
}