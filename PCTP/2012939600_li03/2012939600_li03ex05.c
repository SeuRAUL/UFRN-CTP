#include<stdio.h>
int main(){
  
  int n, s=0, cont, somapar=0, somaimp=0;
  
  printf("Informe um numero de somas: ");
  scanf("%i", &n);
  
  while(s < n){
    printf("Informe um numero a somar: ");
    scanf("%i", &cont);
    if(cont %2 == 0)
      somapar = somapar + cont;
    else
      somaimp = somaimp + cont;
    s++;
  }
  
  printf("pares: %i\nimpares: %i\n", somapar, somaimp);
  
  return 0;
}