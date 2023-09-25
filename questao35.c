#include <stdio.h>

int main() {
    float minutos;
    int horas, minutosConvertidos;
    float segundos;

    printf("Digite o tempo em minutos: ");
    scanf("%f", &minutos);

    if (minutos >= 0) {
        horas = (int)(minutos / 60);
        minutosConvertidos = (int)(minutos - horas * 60);
        segundos = (minutos - horas * 60 - minutosConvertidos) * 60;

        printf("%.2f min corresponde a %d h %d min %.1f s\n", minutos, horas, minutosConvertidos, segundos);
    } else {
        printf("Digite um valor não negativo de minutos.\n");
    }

    return 0;
}
