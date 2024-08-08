#include <stdio.h>

int main() {
    int a = 10;
    int b = 20;
    int c = b - a;
    int d = (a + b) * c;
    
    a += 10;
    b -= 2;

    int f = a + b * d;

    printf("Resultado da variável b: %d\n\n", b);
    printf("Resultado da variável f: %d", f);
}