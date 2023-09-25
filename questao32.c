#include <stdio.h>

int main() {
    float salario, conta1, conta2, salarioRestante;

    printf("Digite o sálario:");
    scanf("%f", &salario);

    printf("Digite o valor da primeira conta:");
    scanf("%f", &conta1);

    printf("Digite o valor da segunda conta:");
    scanf("%f", &conta2);

    if(salario > 0 && conta1 > 0 && conta2 > 0) {

    salarioRestante = salario - (conta1 * 1.02) - (conta2 * 1.02);

    printf("o sálario restante será de: %.2f\n", salarioRestante);

    } else {

    printf("Digite um valor positivo para ambos as perguntas.");

    }



    return 0;
}
