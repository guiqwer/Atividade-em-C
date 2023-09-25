#include <stdio.h>

int main() {
    float horasNormais, horasExtras, salarioBruto, salarioLiquido;
    float valorHoraNormal = 10.0;
    float valorHoraExtra = 15.0;
    float imposto = 0.10;

    printf("Digite o número de horas normais trabalhadas: ");
    scanf("%f", &horasNormais);

    printf("Digite o número de horas extras trabalhadas: ");
    scanf("%f", &horasExtras);

    if (horasNormais >= 0 && horasExtras >= 0) {
        salarioBruto = (horasNormais * valorHoraNormal) + (horasExtras * valorHoraExtra);
        salarioLiquido = salarioBruto - (salarioBruto * imposto);

        printf("Salário bruto: R$ %.2f\n", salarioBruto);
        printf("Salário líquido: R$ %.2f\n", salarioLiquido);
    } else {
        printf("As horas trabalhadas não podem ser negativas.\n");
    }

    return 0;
}
