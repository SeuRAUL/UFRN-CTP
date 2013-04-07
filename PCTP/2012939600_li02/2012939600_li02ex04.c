#include<stdio.h>
int main(){
  int a;

  printf("Informe o numero digitado: ");
  scanf("%i", &a);
  
  if (a>0)
    printf("Positivo\n");
  else if (a<0)
    printf("Negativo\n");
  else
    printf("Igual a zero\n");
  
  return 0;
}