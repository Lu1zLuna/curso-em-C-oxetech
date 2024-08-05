#include <stdio.h>
int main()
{
	int quantidadeDivisiveis = 0;
	int minimoIntervalo = 0;
	int maximoIntervalo = 100;
	_Bool possuiPrimos = 0;
	
	printf("Numeros primos no intervalo de %d a %d:\n", minimoIntervalo, maximoIntervalo);
	
	for (int i = minimoIntervalo; i <= maximoIntervalo; i++)
	{
		quantidadeDivisiveis = 0;
		
		for (int x = 1; x <= i; x++)
		{
			if (i % x == 0) 
			{
				quantidadeDivisiveis++;
			}
		}
		
		if (quantidadeDivisiveis==2)
		{
			printf("%d\n", i);
			possuiPrimos = 1;
		}
	}
	
	if (possuiPrimos = 0) 
	{
		printf("\nNao possui primos no intervalo.");
	}
}