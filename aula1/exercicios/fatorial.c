#include <stdio.h>

unsigned long long fatorial(int num) {
	if (num == 0){
	   return 1;
	}
	else if (num < 0) 
	{
		printf("Erro! Números negativos não possuem fatorial.\n");
	}

   return fatorial(num - 1) * num;
}

int main() 
{
	int valor;
	
	printf("Digite um número para calcular a sua fatoria: ");
	scanf("%d", &valor);
	
	unsigned long long resultado = fatorial(valor);
	printf("resultado: %llu", resultado);
}