#include<stdio.h>
int main(){
  int ano;
  
  printf("Informe o ano: ");
  scanf("%d", &ano);
  
  if (ano % 4 == 0 && (ano % 100 != 0 || ano % 400 == 0))
    printf("366 dias\n");
  else
    printf("365 dias\n");
  
  return 0;
}