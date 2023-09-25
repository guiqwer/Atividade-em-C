#include <stdio.h>

int main() {
    const float PI = 3.14;
    float raio, area;

    printf("Digite o raio da pizza: ");
    scanf("%f", &raio);

    if (raio < 0) {
        printf("O raio não pode ser negativo.\n");
    } else {

        area = PI * raio * raio;

        printf("A área da pizza é: %.2f\n", area);
    }

    return 0;
}
