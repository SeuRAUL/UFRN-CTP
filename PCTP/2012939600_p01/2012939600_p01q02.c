#include<stdio.h>

int primo(int n){
  int cont=1, soma=0;
  
  while(cont <= n){
	 if(n%cont == 0)
		soma++;
	 cont++;
  }
  if(soma == 2 || soma == 1)
	 return 1;
  else
	 return 0;
}

int main(){
  int n, num, i=1, soma_total=0;
  
  printf("Digite a quantidade de valores: ");
  scanf("%i", &n);
  
  while(i <= n){
	 printf("Digite o %io valor: ", i);
	 scanf("%i", &num);

	 if(primo(num) == 1)
		soma_total = soma_total + num;

	 i++;
  }
  
  printf("soma dos primos: %i\n", soma_total);

  return 0;
}