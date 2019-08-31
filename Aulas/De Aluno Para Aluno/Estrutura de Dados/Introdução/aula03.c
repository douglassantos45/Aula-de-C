/*********************
	CASTING
*/

#include<malloc.h>
#include<stdio.h>
#include<math.h> //a biblioteca math.h existem as funções CEIL E FLOOR (Arredondar para cima, arredondar para baixo),!

typedef struct {

	int x,
		y;

}FazandoCasting;

int main () {

	FazandoCasting* casting = (FazandoCasting*) malloc(sizeof(casting));
	casting->x = 16;
	casting->y = 6;

	//Fazendo CASTING
	float resultado = (float) casting->x / casting->y;
	char resultado2 = (char) casting->x / casting->y;

	printf("\n%f\n\n", ceil(resultado));//Arredondado para cima
	printf("\n%c\n\n", resultado2);

	return 0;
}