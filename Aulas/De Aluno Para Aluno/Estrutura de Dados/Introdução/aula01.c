/*********************
MANIPULANDO ESTRUTURAS
*/

#include<stdio.h>
#include<malloc.h> //malloc aloca um espaço de memória e retorna um ponteiro do tipo void para o início do espaço de memória alocado.

typedef struct{
	
	int hora,
		minutos,
		segundos;

}Horario;

int main (void) {

	//Definindo o tipo da estrutura 
	Horario* agora = (Horario*) malloc(sizeof(agora));
	agora->hora = 15;
	agora->minutos = 30;
	agora->segundos = 45;

	printf("\n%i:%i:%i", agora->hora, agora->minutos, agora->segundos);


	//Manipulando Estruturas
	Horario* depois = (Horario*) malloc(sizeof(depois));
	depois->hora = agora->hora + 5;
	depois->minutos = agora->minutos + 10;
	depois->segundos = agora->segundos + 5;

	printf("\n%i:%i:%i", depois->hora, depois->minutos, depois->segundos);

	printf("\n\n");

}