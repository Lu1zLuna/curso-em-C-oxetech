#include <stdio.h>
int main() {
    int larguraRetangulo;
    int alturaRetangulo;

    printf("Digite a largura do retangulo: ");
    scanf("%d", &larguraRetangulo);

    printf("Digite a largura do retangulo: ");
    scanf("%d", &alturaRetangulo);

    int areaRetangulo = larguraRetangulo * alturaRetangulo;
    int perimetroRetangulo = (larguraRetangulo + alturaRetangulo) * 2;

    printf("\nArea do retangulo: %d\n", areaRetangulo);
    printf("Perimetro do retangulo: %d", perimetroRetangulo);
}