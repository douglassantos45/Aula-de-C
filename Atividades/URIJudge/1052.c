#include<stdio.h>
#include<string.h>

_Bool VarificaMes (int m) {

	if(m == 1) printf("\nJaneiro");
	if(m == 2) printf("\nFevereiro");
	if(m == 3) printf("\nMarço");
	if(m == 4) printf("\nAbril");
	if(m == 5) printf("\nMaio");
	if(m == 6) printf("\nJunho");
	if(m == 7) printf("\nJulho");
	if(m == 8) printf("\nAgosto");
	if(m == 9) printf("\nSetembro");
	if(m == 10) printf("\nOutubro");
	if(m == 11) printf("\nNovembro");
	if(m == 12) printf("\nDezembro");
	else {
		printf("\nOpção Invalida\nInforme novamente\n>>> "); 
		main();
	}	
}


int main (void) {

	/*Leia um valor inteiro entre 1 e 12, inclusive. Correspondente a este valor, deve ser apresentado como resposta o mês do ano por extenso, em inglês, com a primeira letra maiúscula.*/

	int mes;

	scanf("%i", &mes);

	VarificaMes(mes);


}