#include <stdio.h>

int main() {
    int anoNascimento, anoAtual, idadeAnos, idadeMeses, idadeDias, idadeSemanas;

    printf("Digite o ano de nascimento:");
    scanf("%d", &anoNascimento);

    printf("Digite o ano atual:");
    scanf("%d", &anoAtual);

    if( anoNascimento > 0 || anoAtual > 0 ) {  

    idadeAnos = anoAtual - anoNascimento;
    idadeMeses = idadeAnos * 12;
    idadeDias = idadeAnos * 365; // 
    idadeSemanas = idadeDias / 7;
    printf("Sua idade em anos é de: %d\n", idadeAnos);
    printf("Sua idade em meses é de: %d\n", idadeMeses);
    printf("Sua idade em dias é de: %d\n", idadeDias);
    printf("Sua idade em semanas é de: %d\n", idadeSemanas);

    } else {

        printf("Digite um valor positivo para ambas as perguntas.");

    }

    return 0;
}
