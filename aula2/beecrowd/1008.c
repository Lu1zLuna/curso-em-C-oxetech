#include <stdio.h>
 
int main() {
	int numeroFuncionario;
	scanf("%d", &numeroFuncionario);
	int horasTrabalhadas;
	scanf("%d", &horasTrabalhadas);
	float valorPorHora;
	scanf("%f", &valorPorHora);
	
	printf("NUMBER = %d\n", numeroFuncionario);
	printf("SALARY = U$ %.2f\n", horasTrabalhadas * valorPorHora);
 
	return 0;
}