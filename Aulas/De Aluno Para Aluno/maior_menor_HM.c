#include "stdio.h"

int main() {

    int idadeH, idadeM, maiorH, menorH, maiorM, menorM;
    maiorH = menorH = menorM = menorM = 0;

    scanf("%i", &idadeH);

    maiorH = idadeH;
    menorH = idadeH;

    for(int i = 0; i < 3; i++) {
        scanf("%i", &idadeH);

        if(idadeH > maiorH)
            maiorH = idadeH;
        if(menorH > idadeH) 
            menorH = idadeH;
    }
    printf("\nMaior Idade [%i anos]\nMenor Idade [%i anos]", maiorH, menorH);
}