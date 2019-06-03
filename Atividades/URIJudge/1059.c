#include<stdio.h>

int ImprimiValores (int x) {
	if(x % 2 == 0) {
		printf("\n%i", x);
	} 
}

int main (void) {

	/*Faça um programa que mostre os números pares entre 1 e 100, inclusive.*/

	for (int i = 1; i <= 100; i++) {
		ImprimiValores(i);
	}

}