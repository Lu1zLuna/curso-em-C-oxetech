#include <stdio.h>
 
int main() {
	double a;
	scanf("%lf", &a);
	double b;
	scanf("%lf", &b);
	double c;
	scanf("%lf", &c);
	
	double average = (a * 2 + b * 3 + c * 5) / (2 + 3 + 5);
	printf("MEDIA = %.1lf\n", average);
 
	return 0;
}