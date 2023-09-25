#include <stdio.h>

int main() {
    float totalNovelos, quantidadeBlusas, novelosPorBlusa;

    printf("Digite a quantidade total de novelos de lã usados: ");
    scanf("%f", &totalNovelos);

    printf("Digite a quantidade de blusas produzidas: ");
    scanf("%f", &quantidadeBlusas);

    if (quantidadeBlusas > 0) {
        novelosPorBlusa = totalNovelos / quantidadeBlusas;
        printf("A quantidade de novelos de lã gastos por blusa é: %.2f\n", novelosPorBlusa);
    } else {
        printf("A quantidade de blusas deve ser maior que zero.\n");
    }

    return 0;
}
