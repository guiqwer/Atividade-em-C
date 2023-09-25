#include <stdio.h>

int main() {
    float peso_prato, valor_a_pagar;

    printf("Peso do prato (em quilos): ");
    scanf("%f", &peso_prato);

    if (peso_prato < 0) {
        printf("O peso do prato não pode ser negativo.\n");
        return 1; 
    }

    valor_a_pagar = peso_prato * 32.00;

    printf("Valor a pagar: R$ %.2f\n", valor_a_pagar);

    return 0;
}
