#include<stdio.h>

int main (void) {

	/*Leia 3 valores reais (A, B e C) e verifique se eles formam ou não um triângulo. Em caso positivo, calcule o perímetro do triângulo e apresente a mensagem:

	Perimetro = XX.X

	Em caso negativo, calcule a área do trapézio que tem A e B como base e C como altura, mostrando a mensagem

	Area = XX.X*/

	float CalcularPerimetro (float x, float y, float z);
	_Bool VerificaTriangulo (float x, float y, float z);

	float a, b, c;

	scanf("%f %f %f", &a, &b, &c);

	CalcularPerimetro(a, b, c);

	VerificaTriangulo(a, b, c);

	return 0;
}

_Bool VerificaTriangulo (float x, float y, float z) {
	if (x < y + z || y < x + z || z < x + y) {
		return 1;
	} else {
		return 0;
	}
}

float CalcularPerimetro (float x, float y, float z) {

	double area = (x * y) / 2;

	if(VerificaTriangulo(x, y, z)) {
		return printf("\nPerímetro: %.1f",(x * y) / z);
	} else {
		printf("\nÁrea: %.1f", area);
	}
}