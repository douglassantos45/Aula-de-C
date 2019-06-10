#include <stdio.h>

int main() {

     /*Faça um programa que leia 5 valores inteiros. 
     Conte quantos destes valores digitados são pares e mostre esta informação.*/
     
     int a, cont;
     
     for(int i = 0; i < 5; i++) {
         scanf("%i", &a);
         if(a % 2 == 0) {
             cont++;
         }
     }

     printf("%i valores pares", cont);
 
    return 0;
}