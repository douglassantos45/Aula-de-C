#include<stdio.h>

int main() {

    int matriz[3][3];

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            scanf("\n%i", &matriz[i][j]);
        }
    }

    for(int l = 0; l < 3; l++) {
        for (int k = 0; k < 3; k++) {
            printf("\n%i", matriz[l][k]);
        }
    }

    return 0;
}