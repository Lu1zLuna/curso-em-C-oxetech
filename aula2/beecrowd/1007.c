#include <stdio.h>
 
int main() {
	int a;
	scanf("%d", &a);
	int b;
	scanf("%d", &b);
	int c;
	scanf("%d", &c);
	int d;
	scanf("%d", &d);
	
	int diferenca = (a * b - c * d);
	printf("DIFERENCA = %d\n", diferenca);
 
	return 0;
}