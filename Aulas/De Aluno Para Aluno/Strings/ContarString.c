#include<stdio.h>


char ContarString (char string[]) {

	int num_String = 0;

	//Contando String na posição num_String até que ele econtre o elemento vazio \0
	do {
		//while(string[num_String] != '\0') {
		++num_String;
	//}
	} while(string[num_String] != '\0');

	return printf("\nPalavra: %s\nTamanho da palavra: %i", string, num_String);
}


int main (void) {

	char palavra[20];

	scanf("%s", &palavra);

	//Função
	ContarString(palavra);
	printf("\n\n");

}