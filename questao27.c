#include <stdio.h>

int main() {
    float baseMaior, baseMenor, altura, area;

    printf("Digite o valor da base maior:");
    scanf("%f", &baseMaior);

    printf("Digite o valor da base menor:");
    scanf("%f", &baseMenor);

    printf("Digite o valor da altura:");
    scanf("%f", &altura);

    if(baseMaior > 0 && baseMenor > 0 && altura > 0) {

    area = ((baseMaior + baseMenor) * altura) / 2;

    printf("%.2f\n", area);

    } else {

    printf("Digite um valor positivo para ambas as perguntas.");

    }

    return 0;
}
