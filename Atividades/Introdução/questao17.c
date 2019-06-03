#include<stdio.h>

int main (void) {

	/*Leia 3 valores inteiros e ordene-os em ordem crescente. No final, mostre os valores em ordem crescente, uma linha em branco e em seguida, os valores na sequência como foram lidos.*/

	int OrdemCescente (int x, int y, int z);

	int n1, n2, n3;

	scanf("%i %i %i", &n1, &n2, &n3);

	OrdemCescente(n1,n2,n3);

	printf("\n\n%i\n%i\n%i", n1, n2, n3);

	printf("\n\n");

	return 0;
}

int OrdemCescente (int x, int y, int z) {
	int aux;

	if(x > y) {
		aux = x;
		x = y;
		y = aux;
	}
	if(x > z) {
		aux = x;
		x = z;
		z = aux;
	}
	if(y > z) {
		aux = y;
		y = z;
		z = aux;
	}

	return printf("\n%i\n%i\n%i", x, y, z);
}