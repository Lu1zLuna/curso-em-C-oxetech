#include <stdio.h>
#include <math.h>

int main() {
    double A, B, C;
    scanf("%lf %lf %lf", &A, &B, &C);

    double delta = B * B - (4 * A * C);
    double raiz1 = ((-B) + sqrt(delta)) / (2 * A);
    double raiz2 = ((-B) - sqrt(delta)) / (2 * A);
    
    if (delta <= 0 || A == 0 || B == 0 || C == 0) {
        printf("Impossivel calcular\n");
    }
    else {
        printf("R1 = %.5lf\n", raiz1);
        printf("R2 = %.5lf\n", raiz2);
    }
}