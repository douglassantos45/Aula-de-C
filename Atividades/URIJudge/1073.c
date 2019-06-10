#include<stdio.h>
#include<math.h>

int main(){

    /* Leia um valor inteiro N. Apresente o quadrado de cada um dos valores pares, de 1 até N, inclusive N, se for o caso.

    Entrada
    A entrada contém um valor inteiro N (5 < N < 2000).

    Saída
    Imprima o quadrado de cada um dos valores pares, de 1 até N, conforme o exemplo abaixo.

    Tome cuidado! Algumas linguagens tem por padrão apresentarem como saída 1e+006 ao invés de 1000000 o que ocasionará resposta errada. Neste caso, configure a precisão adequadamente para que isso não   ocorra. */

    int qtd_Valores;

    scanf("%i", &qtd_Valores);

    for(int i = 0; i <= qtd_Valores; i++){
        if(i % 2 == 0 && i != 0) {
            
            printf("\n%i ^ 2 = %i", i, i*i);
        }
    }

    printf("\n\n");

}