#include <stdio.h>

int main() {
    float diagonalMaior, diagonalMenor, area;

    printf("Digite a diagonal maior:");
    scanf("%f", &diagonalMaior);

    printf("Digite a diagonal menor:");
    scanf("%f", &diagonalMenor);

    if(diagonalMaior > 0 && diagonalMenor > 0) {

    area = (diagonalMaior * diagonalMenor) / 2;

    printf("%.2f de área.\n", area);

    } else {

    printf("Digite um valor positivo para diagonal maior e menor");

    }


    return 0;
}
