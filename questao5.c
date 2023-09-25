#include <stdio.h>

int main() {
    int quantidade_paes, quantidade_broas;
    float valor_total_arrecadado, valor_poupanca;

    printf("Quantidade de pães vendidos: ");
    scanf("%d", &quantidade_paes);

    printf("Quantidade de broas vendidas: ");
    scanf("%d", &quantidade_broas);

    if (quantidade_paes < 0 && quantidade_broas < 0) {
        printf("Quantidades não podem ser negativas.\n");
    } else {

        valor_total_arrecadado = (quantidade_paes * 0.50) + (quantidade_broas * 1.50);

        valor_poupanca = valor_total_arrecadado * 0.10; 

        printf("Total arrecadado com pães e broas: R$ %.2f\n", valor }

}