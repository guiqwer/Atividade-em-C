#include <stdio.h>

int main() {
  int a = 10, b = 20, c = 0; // variáveis
  
  c = a;
  a = b;
  b = c;

  printf("Agora os valores inverteram.\n a = %d, e b = %d.", a, b);
  
}

