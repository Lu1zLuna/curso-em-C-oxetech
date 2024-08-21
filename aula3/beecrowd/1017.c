#include <stdio.h>

int main() 
{
	float tempoGasto, velocidadeMedia;
	
	scanf("%f", &tempoGasto);
	scanf("%f", &velocidadeMedia);
	
	float distancia = tempoGasto * velocidadeMedia;
	float gasolinaGasta = distancia / 12;
	
	printf("%.3f\n", gasolinaGasta);
}