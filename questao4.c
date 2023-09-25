#include <stdio.h>

int main() {
    int quantidadePaes, quantidadeBroas;
    float precoPao = 0.50, precoBroa = 1.50;
    float totalVendas, poupanca;

    printf("Digite a quantidade de pães vendidos: ");
    scanf("%d", &quantidadePaes);

    printf("Digite a quantidade de broas vendidas: ");
    scanf("%d", &quantidadeBroas);

    if(quantidadeBroas >= 0 && quantidadePaes >= 0 ){

    totalVendas = (quantidadePaes * precoPao) + (quantidadeBroas * precoBroa);

    poupanca = totalVendas * 0.10;

    printf("Total arrecadado com a venda: R$ %.2f\n", totalVendas);
    printf("Quantia a ser guardada na conta de poupança: R$ %.2f\n", poupanca);

    } else {
    
    printf("Digite um valor positivo para broas e pães.");
    
    }


    return 0;
}
