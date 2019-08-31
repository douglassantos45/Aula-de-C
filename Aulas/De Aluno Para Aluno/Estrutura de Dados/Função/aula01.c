/**************************
PASSAR E RECEBER ESTRUTURAS
*/

#include<stdio.h>
#include<malloc.h>

typedef struct{
	
	int hora,
		minutos,
		segundos;

}Horario;


//Função Struct
struct Horario* teste (Horario* x) {

	//Mudando Horario
	x->hora = 100;
	x->minutos = 100;
	x->segundos = 100;

	printf("\nHorário Novo: %i:%i:%i", x->hora, x->minutos, x->segundos);
}


int main (void) {
	
	//Declaração Função Struct
	struct Horario* teste (Horario* x);

	//Declaração Struct agora
	Horario* agora = (Horario*) malloc(sizeof(agora));
	agora->hora = 15;
	agora->minutos = 30;
	agora->segundos = 45;


	Horario* proximo = (Horario*) malloc(sizeof(proximo));
	proximo = agora; //Jogando o valor das 3 variáveis na Estrutura PROXIMA

	printf("\nHorário Antigo: %i:%i:%i", proximo->hora, proximo->minutos, proximo->segundos);

	teste(agora);//Função teste

	printf("\n\n");

}