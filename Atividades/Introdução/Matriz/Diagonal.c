#include<stdio.h>

//https://www.youtube.com/playlist?list=PLrqNiweLEMonijPwsHckWX7fVbgT2jS3P

int main() {

    int matriz[3][3], media;

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            printf("\nPosição %i valor %i ", i, j);
            scanf("%i", &matriz[i][j]);
        }
    }

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            printf("[%i] ", matriz[i][j]);
        }
        printf("\n");
    }

    for(int i = 0; i < 3; i++) {
        printf("\nValores Diagonal Principal %i", matriz[i][i]);
    }


    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            if(i+j == 2) { // == dependente do tamanho da matriz, se for 4x4, coloca == 4
                printf("\nValores Diagonal Secundária %i", matriz[i][j]);  
            }
        }
    }




    return 0;
}