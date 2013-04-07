#include <stdio.h>
int main (){
  int a;
  printf("Digite um numero: ");
  scanf("%d", &a);
  printf("O quadrado de a é: %i\nE o cubo de a é: %i\n", a*a, a*a*a);
  return 0;
}