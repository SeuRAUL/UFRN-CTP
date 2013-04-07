#include <stdio.h>
int main (){
  int a;
  printf("Digite um numero inteiro: ");
  scanf("%d", &a);
  printf("A divisão desse numero por 2 é: %i\nE a divisão desse numero por 3 é: %i\n", a/2, a/3);
  return 0;
}