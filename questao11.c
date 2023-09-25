#include <stdio.h>

int main() {
    int diasSemAcidentes;
    int anos, meses, dias;

    printf("Digite a quantidade de dias sem acidentes: ");
    scanf("%d", &diasSemAcidentes);

    if (diasSemAcidentes < 0) {
        printf("A quantidade de dias não pode ser negativa.\n");
    } else {

        anos = diasSemAcidentes / 360; 
        diasSemAcidentes %= 360;

        meses = diasSemAcidentes / 30; 
        dias = diasSemAcidentes % 30;

        printf("Tempo sem acidentes: %d anos, %d meses, %d dias\n", anos, meses, dias);
    }

    return 0;
}
