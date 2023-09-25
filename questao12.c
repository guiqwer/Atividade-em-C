#include <stdio.h>

int main() {
    float salarioInicial, salarioComAumento, salarioFinal;
    float aumento = 0.15; 
    float imposto = 0.08; 

    printf("Digite o salário do funcionário: R$ ");
    scanf("%f", &salarioInicial);

    if (salarioInicial < 0) {
        printf("O salário não pode ser negativo.\n");
    } else {

        salarioComAumento = salarioInicial * (1 + aumento);

        salarioFinal = salarioComAumento * (1 - imposto);

        printf("Salário inicial: R$ %.2f\n", salarioInicial);
        printf("Salário com aumento: R$ %.2f\n", salarioComAumento);
        printf("Salário final após desconto de impostos: R$ %.2f\n", salarioFinal);
    }

    return 0;
}
