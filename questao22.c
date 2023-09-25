#include <stdio.h>

int main() {
    int moedas1real, moedas50cent, moedas25cent, moedas10cent, moedas5cent;
    float valorTotal;

    printf("Quantidade de moedas de 1 real: ");
    scanf("%d", &moedas1real);

    printf("Quantidade de moedas de 50 centavos: ");
    scanf("%d", &moedas50cent);

    printf("Quantidade de moedas de 25 centavos: ");
    scanf("%d", &moedas25cent);

    printf("Quantidade de moedas de 10 centavos: ");
    scanf("%d", &moedas10cent);

    printf("Quantidade de moedas de 5 centavos: ");
    scanf("%d", &moedas5cent);

    if (moedas1real >= 0 && moedas50cent >= 0 && moedas25cent >= 0 && moedas10cent >= 0 && moedas5cent >= 0) {
        valorTotal = (moedas1real * 1.0) + (moedas50cent * 0.5) + (moedas25cent * 0.25) + (moedas10cent * 0.10) + (moedas5cent * 0.05);
        printf("O valor total economizado é de R$ %.2f\n", valorTotal);
    } else {
        printf("As quantidades não podem ser negativas.\n");
    }

    return 0;
}
