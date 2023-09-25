#include <stdio.h>

int main() {
    int numeroCavalos, totalFerraduras;
    
    printf("Digite o número de cavalos no haras: ");
    scanf("%d", &numeroCavalos);

    if (numeroCavalos <= 0) {

        printf("Número inválido. Insira um número positivo de cavalos.\n"); 
        
    }

    totalFerraduras = numeroCavalos * 4;

    printf("Você precisará de um total de %d ferraduras.\n", totalFerraduras);

    return 0;
}
