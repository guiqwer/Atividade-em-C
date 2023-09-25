#include <stdio.h>

int main() {
    int partesAgua = 8, partesSuco = 2;
    int quantidadeTonel;
    float litrosAgua, litrosSuco;

    printf("Quantidade de tonéis de refresco: ");
    scanf("%d", &quantidadeTonel);

    if (quantidadeTonel >= 0) {
        litrosAgua = quantidadeTonel * partesAgua;
        litrosSuco = quantidadeTonel * partesSuco;
        printf("Em %d tonéis de refresco, há %.2f litros de água mineral e %.2f litros de suco de maracujá.\n", quantidadeTonel, litrosAgua, litrosSuco);
    } else {
        printf("A quantidade de tonéis não pode ser negativa.\n");
    }

    return 0;
}
