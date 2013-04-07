/* Seu_RAUL
 * PCTP -> Lista09.Questao04*/

#include<stdio.h>
int verifica_primo(int p){
  int i, divisoes=0;
  for(i=1;i<=p;i++)
    if(p%i == 0) divisoes++;
  
    if(divisoes > 2) return 0;
    else return 1;
}
/*  Usando a função do item anterior, escreva um programa que receba n >= 1 números inteiros positivos e calcule a soma dos que são primos. */
int main(){
  int n, i, p, soma=0;
  
  printf("Quantidade de numeros: ");
  scanf("%i", &n);
  
  for(i=0;i<n;i++){
    printf("%iº numero: ", i+1);
    scanf("%i", &p);
    
    if(verifica_primo(p) == 1) soma += p;
  }
  
  printf("soma de primos: %i\n", soma);
  
  return 0;
}