#include<stdio.h>

typedef struct {

	int hora,
		minutos,
		segundos;

}Horario;

//Função para preecher
int preecherHorario (Horario vetorHorario[5]) {
	for(int i = 0; i < 5; i++) {
		printf("\nInforme o %i Horário\n>>> ", i + 1);
		scanf("%i %i %i", &vetorHorario[i].hora, &vetorHorario[i].minutos, &vetorHorario[i].segundos);
	}

	return 0;
}

//Função para exibir
int mostrarHorario (Horario vetorHorario[5]) {
	for(int j = 0; j < 5; j++) {
		printf("\n%i Horário ", j + 1);
		printf("%i : %i : %i", vetorHorario[j].hora, vetorHorario[j].minutos, vetorHorario[j].segundos);
	}

	return 0;
}


int main (void) {

	/*Crie um programa que possui uma função que recebe como argumento um vetor de tamanho 5 de tipo estrutura sendo que essa estrutura deve armazenar um determinado horário no formato hh:mm:ss, peça que o usuário digite 5 horários diversos que deverão ser armazendos no argumento recebido. Crie uma segunda função que receberá este msmo vetor estrutura mas dessa vez a função deverá apenas ler os valores armazendos no vetor estrtura mostrando uma mensagem apropriada.*/

	
	Horario vetorHorario[5];
	
	preecherHorario(vetorHorario);

	mostrarHorario(vetorHorario);

	printf("\n\n");

}