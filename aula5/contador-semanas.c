#include <stdio.h>

int main() {
	int contador;
	int minhas_aulas[7][2];

	for (contador = 0; contador < 7; contador++) {
		minhas_aulas[contador][0] = contador; // Inicializa a primeira coluna com o valor do contador

		// Atribui valores à segunda coluna de acordo com o indice
		if (contador == 0) {
			minhas_aulas[contador][1] = 0;
		} 
		else if (contador == 1) {
			minhas_aulas[contador][1] = 5;
		} 
		else if (contador == 2) {
			minhas_aulas[contador][1] = 4;
		} 
		else if (contador == 3) {
			minhas_aulas[contador][1] = 2;
		} 
		else if (contador == 4) {
			minhas_aulas[contador][1] = 3;
		} 
		else if (contador == 5) {
			minhas_aulas[contador][1] = 1;
		} 
		else if (contador == 6) {
			minhas_aulas[contador][1] = 0;
		}
	}

	// Imprime a matriz
	for (int i = 0; i < 7; i++) {
		for (int j = 0; j < 2; j++) {
			printf("%d %d\n",  minhas_aulas[i][0], minhas_aulas[i][1]);
		}
	}

	return 0;
}