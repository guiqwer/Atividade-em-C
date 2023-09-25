#include <stdio.h>

int main() {
    float dinheiroReais, dinheiroDolares, dinheiroMarcos, dinheiroLibras;
    const float cotacaoDolar = 5.65;
    const float cotacaoMarco = 3.27;
    const float cotacaoLibra = 7.48;

    printf("Digite a quantidade de dinheiro em reais: ");
    scanf("%f", &dinheiroReais);

    if (dinheiroReais > 0 ) {

    dinheiroDolares = dinheiroReais / cotacaoDolar;
    dinheiroMarcos = dinheiroReais / cotacaoMarco;
    dinheiroLibras = dinheiroReais / cotacaoLibra;

    printf("Dinheiro em Dólares: %.2f\n", dinheiroDolares);
    printf("Dinheiro em Marcos: %.2f\n", dinheiroMarcos);
    printf("Dinheiro em Libras: %.2f\n", dinheiroLibras);

    } else {

    printf("Digite um valor positivo.");
    
    }


    return 0;
}
