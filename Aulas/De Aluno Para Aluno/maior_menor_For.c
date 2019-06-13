#include<stdio.h>

int main() {

    int idadeHomem, idadeMulher, maiorM, menorM, maiorH, menorH;
    maiorM = menorM = menorH = maiorH = 0;

    scanf("%i", &idadeHomem);
    menorH = idadeHomem;
    maiorH = idadeHomem;

    for(int i = 0; i < 2; i++) {
        scanf("%i", &idadeHomem);

        if(idadeHomem > maiorH) 
            maiorH = idadeHomem;
        if(menorH > idadeHomem)
            menorH = idadeHomem;
    }
    printf("\nMenor: %i\nMaior: %i", menorH, maiorH);

    scanf("%i", &idadeMulher);
    menorM = idadeMulher;
    maiorM = idadeMulher;

    for(int i = 0; i < 2; i++) {
        scanf("%i", &idadeMulher);
        
        if(idadeMulher > maiorM)
            maiorM = idadeMulher;
        if(menorM > idadeMulher)
            menorM = idadeMulher;
    }    

    printf("\nMenor: %i\nMaior: %i", menorM, maiorM);
}