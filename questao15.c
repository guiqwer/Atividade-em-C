#include <stdio.h>

int main() {
    int totalEleitores, votosBrancos, votosNulos, votosValidos;
    float percentualBrancos, percentualNulos, percentualValidos;

    printf("Digite o número total de eleitores: ");
    scanf("%d", &totalEleitores);

    printf("Digite o número de votos em branco: ");
    scanf("%d", &votosBrancos);

    printf("Digite o número de votos nulos: ");
    scanf("%d", &votosNulos);

    printf("Digite o número de votos válidos: ");
    scanf("%d", &votosValidos);

    if(totalEleitores >= 0 && votosBrancos >= 0 && votosNulos >= 0 && votosValidos >= 0 ){

    percentualBrancos = (float)votosBrancos / totalEleitores * 100;
    percentualNulos = (float)votosNulos / totalEleitores * 100;
    percentualValidos = (float)votosValidos / totalEleitores * 100;

    printf("Percentual de votos em branco: %.2f%%\n", percentualBrancos);
    printf("Percentual de votos nulos: %.2f%%\n", percentualNulos);
    printf("Percentual de votos válidos: %.2f%%\n", percentualValidos);

    } else{
    
    printf("Digite um valor positivo para ambos as perguntas.");

    }

    return 0;
}
