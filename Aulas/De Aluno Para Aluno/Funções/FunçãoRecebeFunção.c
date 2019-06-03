#include<stdio.h>

int main () {

    float SomaValores(float x, float y);

    float a, b;
    
    scanf("%f %f", &a, &b);
    printf("\n%.1f", SomaValores(a, b));
}

float SomaValores(float x, float y) {

    //Declarando função para verificar Número Negativo
    _Bool VerificaNegativo (float z);

    if (x < 0) x = VerificaNegativo(x);
    if (y < 0) y = VerificaNegativo(y);

    return x + y;
}   

//Verificando Valor
_Bool VerificaNegativo (float z) {
    return z * -1; //Retornar posistivo
}