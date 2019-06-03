#include<stdio.h>

int main (void) {

    float x, y;

    scanf("%f %f", &x, &y);

    if (x < 0) {
        if (y < 0) {
            printf("\nQ3");
        } else if (y > 0) {
            printf("\nQ2");
        }
    } else if (x > 0) {
        if (y > 0) {
            printf("\nQ1");
        } else if (y < 0) {
            printf("\nQ4");
        }
    } else {
        printf("\nNo mesmo ponto");
    }

    printf("\n\n");
    return 0;
}