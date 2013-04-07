#include<stdio.h>
int main(){
  int i, j;

  printf("Digite o 1o numero desejado: ");
  scanf("%i", &i);
  printf("Digite o multiplo desejado: ");
  scanf("%i", &j);
  
  printf("O menor inteiro maior que %i q é múltiplo de %i eh: %i\n", i, j, i + j - (i % j));
  
  return 0;
}