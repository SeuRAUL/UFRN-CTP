#include<stdio.h>
int main(){
  int n, n2=1, i=1;
  
  printf("Informe o numero: ");
  scanf("%i", &n);
  
 while(i<=n){
   n2 = n2*i;
   i++;
 }
  
  printf("O fatorial eh: %i\n", n2);
  
  return 0;
}