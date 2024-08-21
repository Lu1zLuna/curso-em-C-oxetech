#include <stdio.h>
#include <math.h>
int main() {
	double A, B, C;
	double pi = 3.14159;
	
	scanf("%lf %lf %lf", &A, &B, &C);

	double areaTriangulo = (A * C) / 2;
	double areaCirculo = pi * pow(C, 2);
	double areaTrapezio = ((A + B) * C) / 2;
	double areaQuadrado = pow(B, 2);
	double areaRetangulo = A * B;


	printf("TRIANGULO: %.3lf\n", areaTriangulo);
	printf("CIRCULO: %.3lf\n", areaCirculo);
	printf("TRAPEZIO: %.3lf\n", areaTrapezio);
	printf("QUADRADO: %.3lf\n", areaQuadrado);
	printf("RETANGULO: %.3lf\n", areaRetangulo);
}