#include <stdio.h>
#include <math.h>

int main() 
{
	int distancialPercorrida;
	double combustivelGasto;
	
	scanf("%d", &distancialPercorrida);
	scanf("%lf", &combustivelGasto);
	
	double resultado = (double)distancialPercorrida / combustivelGasto;
	
	printf("%3.lf km/l", resultado);
}