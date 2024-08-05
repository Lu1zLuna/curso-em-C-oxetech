#include <stdio.h>
#include "pares.h"
int main()
{
	int minimoIntervalo = 1;
	int maximoIntervalo = 100;
	
	printf("Quantidade de números pares entre %d e %d:\n", minimoIntervalo, maximoIntervalo);
	pares(minimoIntervalo, maximoIntervalo);
}

void pares(int minimoIntervalo, int maximoIntervalo)
{
	for (int i = minimoIntervalo; i < maximoIntervalo; i++)
	{
		if (i % 2 == 0) 
		{
			printf("%d; ", i);
		}
	}
	
}