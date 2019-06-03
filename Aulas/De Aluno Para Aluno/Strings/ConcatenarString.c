#include<stdio.h>
#include<string.h>


void ConcatenarStrings (char string[], int tamanho1, char string2[], int tamanho2, char string3[]) {

	for (int i = 0; i < tamanho1; i++) {
		//Concatenando palavra
		string3[i] = string[i];
	}

	for (int j = 0; j < tamanho2; j++) {
		//Concatenando palavra2 na ultima posição 
		string3[tamanho1 + j] = string2[j];
	}

}


int main (void) {

	char palavra[] = {'B', 'r', 'a', 's', 'i', 'l', ' ', 'e', ' '};
	char palavra2[] = {'R', 'u', 'i', 'm'};
	char novaPalavra[15];


	//Função para concatenar os vetores palavra e palavra2
	ConcatenarStrings(palavra, 9, palavra2, 4, novaPalavra);

	for (int i = 0; i < 15; i++) {
		printf("%c", novaPalavra[i]);
	}

	printf("\n\n");

	return 0;
}