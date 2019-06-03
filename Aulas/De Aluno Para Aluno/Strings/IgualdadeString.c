#include<stdio.h>

int main (void) {

	//Declarando função
	_Bool IgualarPalavras(char p1[], char p2[]);


	char palavra[20];
	char palavra2[20];

	scanf("%s %s", &palavra, &palavra2);

	//Verificando palavras;
	if (IgualarPalavras(palavra, palavra2)) {
		printf("\nPalavras são iguais");
	} else {
		printf("\nPalavras NÃO são iguais");
	}

	printf("\n\n");


	return 0;
}


//Função que retorna apenas True e False
_Bool IgualarPalavras (char p1[], char p2[]) {

	int i = 0;

	//Verifica cada posição dos elementos
	while(p1[i] == p2[i] && p1[i] != '\0' && p2[i] != '\0') {
		i++;
	}

	//Verificar se as strings na posição ultima do i são iguais ao elemento vazio
	if (p1[i] == '\0' && p2[i] == '\0') {
		return 1;
	} else {
		return 0;
	}

}
