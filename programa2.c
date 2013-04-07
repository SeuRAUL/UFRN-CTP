#include <stdio.h>
int main(){
  int a, b, c;
  printf("Digite o primeiro numero inteiro:\n");
  scanf("%d", &a);
  printf("Digite o segundo numero inteiro:\n");
  scanf("%d", &b);
  printf("Digite o terceiro numero inteiro:\n");
  scanf("%d", &c);
  printf("A soma dos 3 numeros é: %i\nO produto dos 3 numeros é: %i\n", a+b+c, a*b*c);
  return 0;
}