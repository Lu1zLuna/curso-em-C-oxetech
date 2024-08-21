#include <stdio.h>
#include <math.h>

int main() 
{
	double n;
	int resto, notas, decimal, moedas, restoMoedas;
	int nota100, nota50, nota20, nota10, nota5, nota2, nota1;
	double centavos50, centavos25, centavos10, centavos5, centavos1;
	
	scanf("%lf", &n);
	
	notas = (int) n;
	decimal = n - notas;
	
	resto = n;
	nota100 = resto / 100;
	resto = resto % 100;
	
	nota50 = resto / 50;
	resto = resto % 50;
	
	nota20 = resto / 20;
	resto = resto % 20;
	
	nota10 = resto / 10;
	resto = resto % 10;
	
	nota5 = resto / 5;
	resto = resto % 5;
	
	nota2 = resto / 2;
	resto = resto % 2;
	
	nota1 = resto / 1;
	resto = resto % 1;
	
	moedas = round(decimal * 100);
	restoMoedas = moedas;

	centavos50 = restoMoedas / 50;
	restoMoedas %= 50;
	
	centavos25 = restoMoedas / 25;
	restoMoedas %= 25;
	
	centavos10 = restoMoedas / 10;
	restoMoedas %= 10;
	
	centavos5 = restoMoedas / 5;
	restoMoedas %= 5;
	
	centavos1 = restoMoedas / 1;
	restoMoedas %= 1;
	
	printf("NOTAS:\n");
	printf("%d nota(s) de R$ 100.00\n", nota100);
	printf("%d nota(s) de R$ 50.00\n", nota50);
	printf("%d nota(s) de R$ 20.00\n", nota20);
	printf("%d nota(s) de R$ 10.00\n", nota10);
	printf("%d nota(s) de R$ 5.00\n", nota5);
	printf("%d nota(s) de R$ 2.00\n", nota2);
	printf("MOEDAS:\n");
	printf("%d moeda(s) de R$ 1.00\n", nota1);
	printf("%d moeda(s) de R$ 0.50\n", centavos50);
	printf("%d moeda(s) de R$ 0.25\n", centavos25);
	printf("%d moeda(s) de R$ 0.10\n", centavos10);
	printf("%d moeda(s) de R$ 0.05\n", centavos5);
	printf("%d moeda(s) de R$ 0.01\n", centavos1);
}