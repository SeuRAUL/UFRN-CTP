#include<stdio.h>
int main(){
  int a;

  printf("Informe o numero digitado: ");
  scanf("%i", &a);
  
  if (a%2==0)
    printf("Par\n");
  else
    printf("Impar\n");
  
  return 0;
}