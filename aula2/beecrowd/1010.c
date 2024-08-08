#include <stdio.h>
 
int main() {
	int codigoPeca1;
	int quantidadePeca1;
	double valorPeca1;
	scanf("%d %d %lf", &codigoPeca1, &quantidadePeca1, &valorPeca1);
	
	int codigoPeca2;
	int quantidadePeca2;
	double valorPeca2;
	scanf("%d %d %lf", &codigoPeca2, &quantidadePeca2, &valorPeca2);
	
	double valorFinal = (valorPeca1 * quantidadePeca1) + (valorPeca2 * quantidadePeca2);
	printf("VALOR A PAGAR: R$ %.2lf\n", valorFinal);
 
	return 0;
}