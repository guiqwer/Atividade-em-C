#include <stdio.h>

int main() {
    float nota1, nota2, media;

    printf("Digite um valor para n1:\n");
    scanf("%f", &nota1);

    printf("Digite um valor para n2:\n");
    scanf("%f", &nota2);

    if(nota1 >= 0 && nota2 >= 0){

    media = (nota1 * 2 + nota2 * 3) / 5;

    printf("%.2f\n", media);

    } else {

    printf("Digite um valor positivo para as notas");

    }

    return 0;
}
