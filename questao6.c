#include <stdio.h>

int main() {
    float preco_litro, valor_pagamento, litros_abastecidos;
    
    printf("Preço do litro da gasolina (R$): ");
    scanf("%f", &preco_litro);

    if (preco_litro < 0) {
        printf("O preço do litro não pode ser negativo.\n");
        return 1; 
    }

    printf("Valor do pagamento (R$): ");
    scanf("%f", &valor_pagamento);

    if (valor_pagamento < 0) {
        printf("O valor do pagamento não pode ser negativo.\n");
        return 1; 
    }

    litros_abastecidos = valor_pagamento / preco_litro;

    printf("Litros abastecidos: %.2f\n", litros_abastecidos);

    return 0;
}
