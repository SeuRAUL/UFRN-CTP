#include<stdio.h>
int main(){
  
  int n, s=0, cont, soma=0;
  
  printf("Informe um numero de somas: ");
  scanf("%i", &n);
  
  while(s < n){
    printf("Informe um numero a somar: ");
    scanf("%i", &cont);
    if(cont >= 0)
      soma = soma + cont;
    s++;
  }
  
  printf("%i\n", soma);
  
  return 0;
}