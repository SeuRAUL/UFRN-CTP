#include <stdio.h>
int main(){
  int a;
  printf("Digite um numero inteiro:\n");
  scanf("%d", &a);
  printf("Numero: %i\nSeu quadrado: %i\nSeu cubo: %i\n", a, a*a, a*a*a);
  return 0;
}