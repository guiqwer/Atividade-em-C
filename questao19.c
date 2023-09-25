#include <stdio.h>

int main() {
    int numFrangos;
    float custoAnelChip = 4.0;
    float custoAnelAlimento = 3.5;
    float gastoTotal;

    printf("Digite o número de frangos a serem marcados: ");
    scanf("%d", &numFrangos);

    if (numFrangos >= 0) {
        gastoTotal = (custoAnelChip + 2 * custoAnelAlimento) * numFrangos;

        printf("Gasto total para marcar todos os frangos: R$ %.2f\n", gastoTotal);
    } else {
        printf("O número de frangos não pode ser negativo.\n");
    }

    return 0;
}
