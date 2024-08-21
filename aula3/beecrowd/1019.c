#include <stdio.h>

int main() {
    int totalSegundos;

    scanf("%d", &totalSegundos);

    int horas = totalSegundos / 3600;
    int resto = totalSegundos % 3600;
    int minutos = resto / 60;
    int segundos = resto % 60;

    printf("%d:%d:%d\n", horas, minutos, segundos);
}