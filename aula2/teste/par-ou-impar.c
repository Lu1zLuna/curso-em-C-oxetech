#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int parOuImpar;

    printf("Escreva um valor para descobrir se ele é par ou impar: ");
    scanf("%d", &parOuImpar);

    if (parOuImpar % 2 == 0) {
        printf("O numero é par");
    }
    else {
        printf("O numero é impar");
    }
}