#include <stdio.h>
#include <math.h>

int main() {
    double x1, y1, x2, y2;
    double distancia;

    printf("Digite as coordenadas do primeiro ponto (x1 y1): ");
    scanf("%lf %lf", &x1, &y1);

    printf("Digite as coordenadas do segundo ponto (x2 y2): ");
    scanf("%lf %lf", &x2, &y2);

    distancia = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2)); // calcular potência. sqrt a raiz.

    printf("A distância entre os dois pontos é: %.2lf\n", distancia);

    return 0;
}
