#include<stdio.h>

int mdc(int n1, int n2){
  int aux;
  
  while(n1%n2 != 0){
	 aux = n1%n2;
	 n1 = n2;
	 n2 = aux;
  }
  
  return n2;
}

int main(){
  int n, num1, num2, i=2;
  
  printf("Digite a quantidade de valores: ");
  scanf("%i", &n);
  
  if(n == 1)
	 printf("mdc: %i", n);
  else{
	 printf("Digite o 1o valor: ");
	 scanf("%i", &num1);
  }
	 
  while(i <= n){
	 printf("Digite o %io valor: ", i);
	 scanf("%i", &num2);
	 
	 num1 = mdc(num1, num2);
	 
	 i++;
  }
  
  printf("mdc: %i\n", num1);
  
  return 0;
}