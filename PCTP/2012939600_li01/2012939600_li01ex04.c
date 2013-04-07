#include <stdio.h>
int main (){
  int a, b, c;
  printf("Digite o valor de a: ");
  scanf("%d", &a);
  printf("Digite o valor de b: ");
  scanf("%d", &b);
  printf("Digite o valor de c: ");
  scanf("%d", &c);
  printf("A soma desses 3 numeros é de: %i\nE a multiplicação dos 3 numeros é de: %i\n", a+b+c, a*b*c);
  return 0;
}