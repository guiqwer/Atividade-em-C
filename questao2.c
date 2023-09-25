#include <stdio.h>

int main() {
    float comprimento, largura, area;

    printf("Digite o comprimento do terreno (em metros): ");
    scanf("%f", &comprimento);

    if (comprimento < 0) {
        printf("Dimensão inválida. O comprimento não pode ser negativo.\n");
        return 1; 
    }

    printf("Digite a largura do terreno (em metros): ");
    scanf("%f", &largura);

    if (largura < 0) {
        printf("Dimensão inválida. A largura não pode ser negativa.\n");
        return 1;
    }

    area = comprimento * largura;
    
    printf("A área do terreno é: %.2f metros quadrados\n", area);

    return 0;
}
