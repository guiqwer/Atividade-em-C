#include <stdio.h>

int main() {
    int qtdPequenas, qtdMedias, qtdGrandes;
    
    float precoPequena = 10.0, precoMedia = 12.0, precoGrande = 15.0;

    float valorTotal;

    printf("Digite a quantidade de camisetas pequenas: ");
    scanf("%d", &qtdPequenas);

    printf("Digite a quantidade de camisetas médias: ");
    scanf("%d", &qtdMedias);

    printf("Digite a quantidade de camisetas grandes: ");
    scanf("%d", &qtdGrandes);

    if (qtdPequenas < 0 || qtdMedias < 0 || qtdGrandes < 0) {
        printf("Quantidades não podem ser negativas.\n");
    } else {

        valorTotal = (qtdPequenas * precoPequena) + (qtdMedias * precoMedia) + (qtdGrandes * precoGrande);

        printf("Valor total arrecadado: R$ %.2f\n", valorTotal);
    }

    return 0;
}

