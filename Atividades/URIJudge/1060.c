#include<stdio.h>

int VerificaValor (float x[]) {
	int total = 0;
	
	for(int j = 0; j < 6; j++) {
		if(x[j] < 0) total = total + 1;
	}
	return total;
}

int main (void) {

	/*Faça um programa que leia 6 valores. Estes valores serão somente negativos ou positivos (desconsidere os valores nulos). A seguir, mostre a quantidade de valores positivos digitados.*/

	float num[6];

	for (int i = 0; i < 6; i++) {
		scanf("%f", &num [i]);
	}
	
	printf("\n%i negativos", VerificaValor(num));

	return 0;
}