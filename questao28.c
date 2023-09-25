#include <stdio.h>

int main() {
    float lado, area;

    printf("Informe a área:");
    scanf("%f", &lado);

    if(lado > 0) {

        area = lado * lado;
        printf("a área é: %.2f\n", area);
        
    } else {

        printf("Digite o lado positivo.");

    }



    return 0;
}
