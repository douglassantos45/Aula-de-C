#include<stdio.h>
#include<math.h>

int main(){
    
    int v[10];

    for(int i = 0; i < 10; i++) {
        v[i] = pow(i, 2);
    }

    for(int i = 0; i < 10; i++) {
        printf("\nValor = %i\nPosição: %i\nEndereço: %i\n", *(v+i), i, v+i);
    }

    return 0;
}