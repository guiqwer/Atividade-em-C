#include <stdio.h>

int main() {
    const float POLEGADAS_PARA_CM = 2.54;
    float alturaCm, larguraCm, comprimentoCm;
    float perimetroCm, perimetroPolegadas;

    printf("Digite a altura da bagagem (em cm): ");
    scanf("%f", &alturaCm);

    printf("Digite a largura da bagagem (em cm): ");
    scanf("%f", &larguraCm);

    printf("Digite o comprimento da bagagem (em cm): ");
    scanf("%f", &comprimentoCm);

    if (alturaCm >= 0 && larguraCm >= 0 && comprimentoCm >= 0) {
        perimetroCm = 2 * (alturaCm + larguraCm + comprimentoCm);
        perimetroPolegadas = perimetroCm / POLEGADAS_PARA_CM;

        printf("Perímetro em centímetros: %.2f cm\n", perimetroCm);
        printf("Perímetro em polegadas: %.2f in\n", perimetroPolegadas);

        if (perimetroPolegadas <= 45) {
            printf("A bagagem está dentro das dimensões permitidas.\n");
        } else {
            printf("A bagagem excede as dimensões permitidas para bagagem de mão.\n");
        }
    } else {
        printf("Digite valores não negativos para altura, largura e comprimento.\n");
    }

    return 0;
}
