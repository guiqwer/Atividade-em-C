#include <stdio.h>

int main() {
    float salarioFixo, valorVendas, comissao, salarioFinal;

    printf("Digite o sálario fixo:\n");
    scanf("%f", &salarioFixo);

    printf("Digite o valor das vendas:\n");
    scanf("%f", &valorVendas);

    if(salarioFixo > 0 && valorVendas > 0) {

    comissao = valorVendas * 0.04;
    salarioFinal = salarioFixo + comissao;

    printf("o valor da comissão sera de %.2f", comissao);
    printf("O sálario final será de %.2f", salarioFinal);

    } else {

    printf("Digite um valor positivo para ambos.");

    }

    return 0;
}
