#include <stdio.h>

int main() {
	int n;
	int cedula100, cedula50, cedula20, cedula10, 
		cedula5, cedula2, cedula1;
	
	scanf("%d", &n);
	printf("%d\n", n);
	
	cedula100 = n / 100;
	n = n % 100;
	
	cedula50 = n / 50;
	n = n % 50;
	
	cedula20 = n / 20;
	n = n % 20;
	
	cedula10 = n / 10;
	n = n % 10;
	
	cedula5 = n / 5;
	n = n % 5;
	
	cedula2 = n / 2;
	n = n % 2;
	
	cedula1 = n / 1;
	n = n % 1;
	
	printf("%d nota(s) de R$ 100,00\n", cedula100);
	printf("%d nota(s) de R$ 50,00\n", cedula50);
	printf("%d nota(s) de R$ 20,00\n", cedula20);
	printf("%d nota(s) de R$ 10,00\n", cedula10);
	printf("%d nota(s) de R$ 5,00\n", cedula5);
	printf("%d nota(s) de R$ 2,00\n", cedula2);
	printf("%d nota(s) de R$ 1,00\n", cedula1);
}