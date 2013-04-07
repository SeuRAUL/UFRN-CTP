#include<stdio.h>
int main(){
  
  int q, r, n, cont=1;
  
  printf("Informe o valor inicial: ");
  scanf("%i", &q);
  printf("Informe a razão: ");
  scanf("%i", &r);
  printf("Informe a quantidade desejada de termos: ");
  scanf("%i", &n);
  
  while(cont<=n){
    printf("%i\n", q);
    q = q + r;
    cont++;
  }
  
  return 0;
}