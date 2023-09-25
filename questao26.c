#include <stdio.h>

int main() {
    float pesoKg, pesoGramas, novoPesoEngordar, novoPesoEmagrecer;

    printf("Digite o peso da pessoa em quilos: ");
    scanf("%f", &pesoKg);

    if(pesoKg > 0){

    pesoGramas = pesoKg * 1000;
    novoPesoEngordar = pesoKg * 1.15;
    novoPesoEmagrecer = pesoKg * 0.80;

    printf("Peso em gramas: %.2f\n", pesoGramas);
    printf("Novo peso se a pessoa engordar 15%%: %.2f\n", novoPesoEngordar);
    printf("Novo peso se a pessoa emagrecer 20%%: %.2f\n", novoPesoEmagrecer);

    } else {

    printf("Digite um valor positivo.");

    }

    return 0;
}
