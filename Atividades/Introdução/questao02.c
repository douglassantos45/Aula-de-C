#include "stdio.h"

#define MAX 10

typedef struct {

	int idade,
		sexo,
		matricula;
	float salario;

}Funcionario;


float calcSalario (int i, int s, int m, float sF) {

	if (i >= 75 && s == 0) return printf("\nMatrícula: N° %i\nSalario: R$ %.2f", m, sF - (sF * 0.10));
	else if (i < 75 && s == 0) return printf("\nMatrícula: N° %i\nSalario: R$ %.2f", m, sF - (sF * 0.08));
	else if (i >= 65 && s == 1) return printf("\nMatrícula: N° %i\nSalario: R$ %.2f", m, sF - (sF * 0.07));
	else if (i < 65 && s == 1) return printf("\nMatrícula: N° %i\nSalario: R$ %.2f", m, sF - (sF * 0.06));

}

int main (void) {

	Funcionario funcionario;

	scanf("%i", &funcionario.idade);
	scanf("%i", &funcionario.sexo);
	scanf("%i", &funcionario.matricula);
	scanf("%f", &funcionario.salario);

	calcSalario(funcionario.idade, funcionario.sexo, funcionario.matricula, funcionario.salario);


	printf("\n\n");

	return 0;
}