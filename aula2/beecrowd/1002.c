#include <stdio.h>
#include <math.h>
int main() {
	double pi = 3.14159;
	double r;
	scanf("%lf", &r);
	
	double a = pi * pow(r, 2);
	printf("A=%.4f\n", a);
	return 0;
}