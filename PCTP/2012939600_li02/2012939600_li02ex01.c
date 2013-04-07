#include<stdio.h>
int main(){
  int x;
  
  printf("Escreva o valor de x: ");
  scanf("%d", &x);
  
  printf("3*%i³-5*%i²+2*5%i-1 =  %i\n",x, x, x , 3*(x*x*x) - 5*(x*x) + 2*x - 1);
  
  return 0;
}
