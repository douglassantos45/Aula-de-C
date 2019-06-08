#include "stdio.h"
#include "string.h"
#include "math.h"
#include "sched.h"

_Bool Tab (void) {
    for(int i = 1; i < 11; i++) printf("\n%i x 8 = %i", i, i * 8);
}
 
int main (void) {

    /*Escreva um algoritmo que calcule e imprima a tabuada do 8 (1 a 10).*/
    
    Tab();
    
}