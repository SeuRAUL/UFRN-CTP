#include <stdio.h>
int main(){
  int a;
  printf("Digite o primeiro numero inteiro:\n");
  scanf("%d", &a);
  printf("Este numero dividido por 2 é: %i\nEste numero dividido por 3 é: %i\n", a/2, a/3);
  return 0;
}