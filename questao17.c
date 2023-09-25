#include <stdio.h>

int main() {
    float celsius, fahrenheit;

    printf("Digite a temperatura em graus Celsius: ");
    scanf("%f", &celsius);

    if (celsius >= -273.15) {   // até 273.15 por que é o zero absoluto
        fahrenheit = (celsius * 9 / 5) + 32;
        printf("A temperatura em graus Fahrenheit é: %.2f\n", fahrenheit);
    } else {
        printf("A temperatura em graus Celsius não pode ser menor que -273.15.\n");
    }

    return 0;
}
