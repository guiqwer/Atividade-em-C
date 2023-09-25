#include <stdio.h>

int main() {
    float horasTrabalhadas, valorHora, horasExtras, valorHoraExtra, salarioBruto, salarioExtras, salarioTotal;

    printf("Digite as horas trabalhadas:");
    scanf("%f", &horasTrabalhadas);

    printf("Digite o valor da hora:");
    scanf("%f", &valorHora);

    printf("Digite as horas extras:");
    scanf("%f", &horasExtras);

    if(horasTrabalhadas > 0 && valorHora > 0 && horasExtras > 0) {

    valorHoraExtra = valorHora * 1.4;
    salarioBruto = horasTrabalhadas * valorHora;
    salarioExtras = horasExtras * valorHoraExtra;
    salarioTotal = salarioBruto + salarioExtras;

    printf("o sálario total será de :%.2f\n", salarioTotal);

    } else {

    printf("Digite um valor positivo para ambas perguntas.");

    }


    return 0;
}
