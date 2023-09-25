#include <stdio.h>

int main() {
    int latas350ml, garrafas600ml, garrafas2litros;
    float litrosTotais;

    printf("Quantidade de latas de 350 ml: ");
    scanf("%d", &latas350ml);

    printf("Quantidade de garrafas de 600 ml: ");
    scanf("%d", &garrafas600ml);

    printf("Quantidade de garrafas de 2 litros: ");
    scanf("%d", &garrafas2litros);

    if (latas350ml >= 0 && garrafas600ml >= 0 && garrafas2litros >= 0) {
        litrosTotais = (latas350ml * 0.35) + (garrafas600ml * 0.6) + (garrafas2litros * 2.0);
        printf("O comerciante comprou %.2f litros de refrigerante.\n", litrosTotais);
    } else {
        printf("As quantidades não podem ser negativas.\n");
    }

    return 0;
}
