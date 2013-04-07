/* Seu_RAUL
 * PCTP -> Lista09.Questao10*/

#include<stdio.h>
int divisao(int *m, int *n, int d){
  if(*m%d == 0 || *n%d == 0){
    if(*m%d == 0)
      *m = *m/d;
    if(*n%d == 0)
      *n = *n/d;
    return 1;
  }
  else
    return 0;
  
}
/*  Programa que lê dois números inteiros positivos 'm' e 'n' e calcula o mínimo múltiplo comum entre 'm' e 'n'. */
int main(){
  int m, n, d, mmc=1;
  
  printf("Informe o 1º numero: ");
  scanf("%i", &m);
  printf("Informe o 2º numero: ");
  scanf("%i", &n);
  
  d = 2;
  do{
    if(divisao(&m, &n, d) == 1){
      mmc = mmc*d;
    }
    else
      d++;
  }while(m > 1 || n > 1);
  
  printf("MMC = %i\n", mmc);
  
  return 0;
}