#include<stdio.h>

int main(void) {

    int matriz[3][3] = {{1,2,3},
                        {4,5,6},
                        {7,8,9}};

    for(int i = 0; i < 3; i++) {
        for(int l = 0; l < 3; l++) {
            printf("\n%i", matriz[i][l]);
        }
    }

    return 0;
}
