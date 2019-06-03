#include "stdio.h"

#define LARANJA 0.30
#define LARANJA12 0.20

typedef struct{
	
	float qtd_Laranja;

}QtdLaranja;

float calcLaranja (float qtd) {

	if (qtd >= 12) return printf("\nTotal de à Pagar: R$ %.2f", qtd * LARANJA12);
	else return printf("\nTotal à Pagar: R$ %.2f", qtd * LARANJA);

}

int main (void) {

	QtdLaranja laranja;
	printf("\nInforme a quantidade de laranja\n>>> ");
	scanf("\n%f", &laranja.qtd_Laranja);

	calcLaranja(laranja.qtd_Laranja);

	printf("\n\n");

}