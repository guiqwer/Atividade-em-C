#include <stdio.h>

int main() {
    int dia, mes, diasPassados = 0;
    
    printf("Digite o dia: ");
    scanf("%d", &dia);
    
    printf("Digite o mês: ");
    scanf("%d", &mes);

    if (dia < 1 || mes < 1 || mes > 12) {
        printf("Por favor, insira valores válidos para dia e mês.\n");
    } else {

        for (int i = 1; i < mes; i++) {
            diasPassados += 30; 
        }
        diasPassados += dia;
        
        printf("Dias passados desde o início do ano: %d\n", diasPassados);
    }
    
    return 0;
}
