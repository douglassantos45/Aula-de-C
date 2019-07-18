#include<stdio.h>

int main() {
    
    int vetor[2];

    vetor[0] = 1;

    for(int i = 1; i < 2; i++) {
        scanf("%i", &vetor[i]);
    }

    for(int j = 0; j < 2; j++) {
        if(vetor[j] == vetor[j+1]) {
            printf("\nVetores iguais!");
            break;
        }else{
            printf("\nVetores diferentes!");
            break;
        }
    }

    return 0;
}