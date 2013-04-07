#include<stdio.h>
int main(){
  
  int n, s=0, cont, somapos=0, somanpos=0;
  
  printf("Informe um numero de somas: ");
  scanf("%i", &n);
  
  while(s < n){
    printf("Informe um numero a somar: ");
    scanf("%i", &cont);
    if(cont > 0)
      somapos++;
    else
      somanpos++;
    s++;
  }
  
  printf("positivos: %i\nnao positivos: %i\n", somapos, somanpos);
  
  return 0;
}