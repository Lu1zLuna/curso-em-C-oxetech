#include <stdio.h>

int main() 
{
	double valor;
	scanf("%lf", &valor);
	
	if ( 0 <= valor && valor <= 25) 
	{
		printf("Intervalo [0,25]\n");
	}
	else if (25 < valor && valor <= 50)
	{
		printf("Intervalo (25,50]\n");
	}
	else if (50 < valor && valor <= 75)
	{
		printf("Intervalo (50,75]\n");
	}
	else if (75 < valor && valor <= 100)
	{
		printf("Intervalo (75,100]\n");
	}
	else if (valor < 0 || valor > 100)
	{
		printf("Fora de intervalo\n");
	}
}