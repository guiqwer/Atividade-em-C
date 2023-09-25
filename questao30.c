#include <stdio.h>

int main() {
    float salarioMinimo, salarioFuncionario, quantidadeSalarios;

    printf("Digite o valor do salário minimo:");
    scanf("%f", &salarioMinimo);

    printf("Digite o salário do funcionario:");
    scanf("%f", &salarioFuncionario);

    if(salarioFuncionario > 0 && salarioMinimo > 0) {

    quantidadeSalarios = salarioFuncionario / salarioMinimo;

    printf("O sálario equivale a %.2f \n sálarios.", quantidadeSalarios);
 
    } else {

    printf("Digite valores positivos para ambas as perguntas.");
    
    }



    return 0;
}
