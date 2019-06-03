#include<stdio.h>
#include<string.h>

int main (void) {

	char nome[] = {'B', 'r', 'a', 's', 'i', 'l'};

	for (int i = 0; i < 6; i++) {
		printf("%c", nome[i]);
	}

	printf("\n\n");

	return 0;
}