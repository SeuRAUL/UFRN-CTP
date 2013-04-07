#include<stdio.h>
int main () {
  int p=1, vendas=0, dia=0, maior=0;
  
  while(p <= 30) {
    printf("vendas do dia %i: ", p);
    scanf("%i", &vendas);
    if(vendas > maior){
      maior = vendas;
      dia = p;
    }
    p++;
  }
  
  printf("dia %i teve maior venda com %i discos\n", dia, maior);
  
  return 0;
}