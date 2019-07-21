#include<stdio.h>
#include<stdbool.h>

#define NUMERODEDEFINICOES  7

struct Dicionario {

    char palavra[20],
         definicao[50];

};

bool compararStrings(const char palavra1[], const char palavra2[]) {

    int i = 0;

    //Verificando igualdade
    while(palavra1[i] == palavra2[i] && palavra1[i] != '\0' && palavra2[i] != '\0'){
        
        ++i;
    }

    if (palavra1[i] == '\0' && palavra2[i] == '\0') {
        return true;
    } else {
        return false;
    }   

}

int procurarString(const struct Dicionario lingua[], const char procurarPalavra[], const int numPalavras){

    bool compararStrings(const char palavra1[], const char palavra2[]);

    int i = 0;

    while(i < numPalavras){
        
        if(compararStrings(procurarPalavra, lingua[i].palavra)){
            return i;
        } else {
            return i++;
        }
    }
    return -1;

}

int main(void){

   
    char palavra[20] = {'\0'};
    int resultadoPesquisa;

    int procurarString(const struct Dicionario lingua[], const char procurarPalavra[], const int numPalavras);

    const struct Dicionario portugues[NUMERODEDEFINICOES] = {
        {"pao","Comida de farinha"},{"mortadela","Comida de carne"},
        {"feijão","Comida brasileira"},{"tropeiro","Tipo de feijão"},
        {"queijo","De minas"},{"macarronada","Tipico de vo"},
        {"pizza","Tipico da Italia"}
    };
    
    printf("\nInforme uma palavra: ");
    scanf("%s", palavra);

    resultadoPesquisa = procurarString(portugues, palavra, NUMERODEDEFINICOES);

    if(resultadoPesquisa != -1) {
        printf("\n%s\n\n", portugues[resultadoPesquisa].definicao);
    } else {
        printf("\nPalavra não encontrada\n\n");
    }

    return 0;
}