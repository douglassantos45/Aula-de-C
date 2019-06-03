#include "stdio.h"

typedef struct {

	float cat,
		  evang,
		  mulc,
		  afroB,
		  outras;

}Comunidade;

float exibirResultado (float c, float e, float m, float aB, float o) {

	float n_Total;

	n_Total = c + e + m + aB + o;

	printf("\nCatólicos: %.2f%%",(c * 100) / n_Total);
	printf("\nEvangélicos: %.2f%%",(e * 100) / n_Total);
	printf("\nMulçumanas: %.2f%%",(m * 100) / n_Total);
	printf("\nAfro Brasileira: %.2f%%",(aB * 100) / n_Total);
	printf("\nOutros: %.2f%%", (o * 100) / n_Total);
}


int main (void) {

	Comunidade comunidade;

	scanf("%f %f %f %f %f", &comunidade.cat, &comunidade.evang, &comunidade.mulc, &comunidade.afroB, &comunidade.outras);

	exibirResultado(comunidade.cat, comunidade.evang, comunidade.mulc, comunidade.afroB, comunidade.outras);

	printf("\n\n");

}