#include <stdio.h>

int main() {
    int numero;

    printf("Digite um número inteiro de até três dígitos: ");
    scanf("%d", &numero);

    if (numero < 100 || numero > 999) {
        printf("Por favor, digite um número de até três dígitos.\n");
    } else {

        int centena = numero / 100;
        int dezena = (numero % 100) / 10;
        int unidade = numero % 10;

        printf("CENTENA = %d DEZENA = %d UNIDADE = %d\n", centena, dezena, unidade);
    }

    return 0;
}
