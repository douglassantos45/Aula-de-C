#include<stdio.h>
#include<string.h>

int main (void) {

	char palavra[6] = {'B', 'r', 'a', 's', 'i', 'l'};
	char palavra0[] = {'B', 'r', 'a', 's', 'i', 'l'};
	char palavra1[7] = {"Brasil"};
	char palavra2[] = {"Brasil"};
	char palavra3[] = "Brasil";


	//Imprimindo diferenças entre as palavras
	printf("\n%s\n", palavra);
	printf("\n%s\n", palavra0);
	printf("\n%s\n", palavra1);
	printf("\n%s\n", palavra2);
	printf("\n%s", palavra3);


	printf("\n\n");
	return 0;
}