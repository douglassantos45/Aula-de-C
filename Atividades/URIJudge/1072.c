#include<stdio.h>

int qtd_valores, valor, in = 0, out = 0;

int CalcIntervalo (int x) {
    
    for(int i = 0; i < qtd_valores; i++) {
        scanf("%i", &valor);
        if(valor >= 10 && valor <= 20) {
            in++;
        } else {
            out++;
        }
    }
    printf("\n%i in\n%i out", in, out);
    return 0;
}

int main() {

    /*Leia um valor inteiro N. Este valor será a quantidade de valores inteiros X que serão lidos em seguida.
    Mostre quantos destes valores X estão dentro do intervalo [10,20] e quantos estão fora do intervalo, mostrando essas informações.

    Entrada
    A primeira linha da entrada contém um valor inteiro N (N < 10000), que indica o número de casos de teste.
    Cada caso de teste a seguir é um valor inteiro X (-107 < X <107). */

    scanf("%i", &qtd_valores);

    CalcIntervalo(qtd_valores);

}

