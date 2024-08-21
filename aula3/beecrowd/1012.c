#include <stdio.h>
#include <stdlib.h>

int Maior(int x, int y)
{
	return (x + y + abs(x - y)) / 2;
}

int main()
{
	int a, b, c;
	
	scanf("%d %d %d", &a, &b, &c);
	
	int resultadoMaior = Maior(a, Maior(b, c));
	
	printf("%d eh o maior\n", resultadoMaior);
}