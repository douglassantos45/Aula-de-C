#include<stdio.h>

#define PI 3.14159
#define DOIS_PI 2 * PI

//Macro
#define AREA_CIRCULO(raio) raio * raio * PI

int main() {

    //Imprimindo valor do Define
    printf("%f\n", PI);
    printf("%f\n", DOIS_PI);

    //Imprimindo valor do macro, passando um valor
    printf("%f\n", AREA_CIRCULO(10));

    return 0;
}