/*************************
VETORES DE ESTRUTURAS
*/

#include<stdio.h>

typedef struct {
	
	int hora,
		minutos,
		segundos;

}Horario;

int main (void) {

	Horario teste[5];
	teste[0].hora = 10;
	teste[0].minutos = 15;
	teste[0].segundos = 10;

	//printf("\n%i:%i:%i\n\n", teste[0].hora, teste[0].minutos, teste[0].segundos);

	for(int i = 0; i < 5; i++) {
		scanf("%i", &teste[i].hora);
	}

	for(int j = 0; j < 5; j++) {
		printf("\n%i", teste[j].hora);
	}

	return 0;
}