#include<stdio.h>

int main (void) {

	/*Leia 2 valores inteiros (A e B). Após, o programa deve mostrar uma mensagem "Sao Multiplos" ou "Nao sao Multiplos", indicando se os valores lidos são múltiplos entre si.*/

	_Bool VerificaMultiplos (int x, int y);

	int a, b;

	scanf("%i %i", &a, &b);

	VerificaMultiplos(a,b);

	printf("\n\n");
	
}

_Bool VerificaMultiplos (int x, int y) {

	if (x > y) {
		if (x % y == 0) {
			printf("\nÉ Multiplo");	
		} else {
			printf("\nNão é Multiplo");
		}
		
	} else if (y > x) {
		if (y % x == 0) {
			printf("\nÉ Multiplo");
		} else {
			printf("\nNão é Multiplo");
		}
		
	} 
}