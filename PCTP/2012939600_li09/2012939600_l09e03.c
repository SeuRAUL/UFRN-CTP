/* Seu_RAUL
 * PCTP -> Lista09.Questao03*/

#include<stdio.h>
/* MDC pelo algoritmo de Euclides */
int mdc(int a, int b){
  int aux;
  while(a%b != 0){
    aux = a%b;
    a = b;
    b = aux;
  }
  return b;
}
/* Programa que receba n>=1 números inteiros positivos e calcule o máximo divisor comum entre todos eles. */
int main(){
  int n, i, a, b;
  
  printf("Quantidade de numeros: ");
  scanf("%i", &n);
  
  printf("1º numero: ");
  scanf("%i", &a);
  
  if(n!=1){
    for(i=1;i<n;i++){
      printf("%iº numero: ", i+1);
      scanf("%i", &b);
      
      a = mdc(a,b);
      
    }
  }
  
  printf("mdc: %i\n", a);
  
  return 0;
}