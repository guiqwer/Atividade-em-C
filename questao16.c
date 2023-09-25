#include <stdio.h>

int main() {
    
    int quantidadeSanduiches;
    float pesoQueijo, pesoPresunto, pesoCarne;

    printf("Digite a quantidade de sanduíches a fazer: ");
    scanf("%d", &quantidadeSanduiches);

    if(quantidadeSanduiches > 0) {

    pesoQueijo = quantidadeSanduiches * 2 * 50.0 / 1000.0; 
    pesoPresunto = quantidadeSanduiches * 1 * 50.0 / 1000.0; 
    pesoCarne = quantidadeSanduiches * 1 * 100.0 / 1000.0; 

    printf("Quantidade de queijo necessária: %.2f kg\n", pesoQueijo);
    printf("Quantidade de presunto necessária: %.2f kg\n", pesoPresunto);
    printf("Quantidade de carne necessária: %.2f kg\n", pesoCarne);

    } else {

    printf("Digite um valor positivo.");

    }


    return 0;
}
