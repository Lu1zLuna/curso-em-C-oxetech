#include <stdio.h>

double media(double a, double b, double c) 
{
	return (a + b + c) / 3;
}

int main() 
{
	int valor1 = 7;
	double valor2 = 13.3;
	double valor3 = 10.5;
	
	double resultadoMedia = media(valor1, valor2, valor3);
	printf("Resultado da media dos tres numeros: %f", resultadoMedia);
}