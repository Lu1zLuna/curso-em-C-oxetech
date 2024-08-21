#include <stdio.h>

int main() {
    int horaInicial, horaFinal;

    scanf("%d %d", &horaInicial, &horaFinal);

    int horaDiferenca = horaFinal - horaInicial;

    if (horaDiferenca < 0) {
        horaDiferenca += 24;
    }

    printf("O JOGO DUROU %d HORA(S)\n", horaDiferenca);
}