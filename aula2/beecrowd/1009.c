#include <stdio.h>
 
int main() {
	char nomeVendedor[20];
	scanf("%s", &nomeVendedor);
	double salarioFixo;
	scanf("%lf", &salarioFixo);
	double vendasEfetuadas;
	scanf("%lf", &vendasEfetuadas);
	vendasEfetuadas *= 0.15;
	
	double salarioFinal = salarioFixo + vendasEfetuadas;
	printf("TOTAL = R$ %.2lf\n", salarioFinal);
 
	return 0;
}