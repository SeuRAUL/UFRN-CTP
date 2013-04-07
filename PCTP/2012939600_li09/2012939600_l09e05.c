/* Seu_RAUL
 * PCTP -> Lista09.Questao05*/

#include<stdio.h>
int conta_digitos(int n, int d){
  int quant=0;
  do{
    if(n%10 == d) quant++;
    n = n/10;
  }while(n >=10);
  if(n == d) quant++;
  
  return quant;
}
/* Programa que lê dois números inteiros positivos 'a' e 'b' e mostra se 'a' é permutação de 'b' */
int main(){
  int i, a, b, teste=1;
  
  printf("Informe a: ");
  scanf("%i", &a);
  printf("Informe b: ");
  scanf("%i", &b);
  
  
  for(i=1;i<10;i++){
    if(conta_digitos(a, i) != conta_digitos(b, i)){
      teste = 0;
      break;
    }
  }
  
  if( teste == 1 ) printf("'a' é permutação em 'b'\n");
  else printf("'a' não é permutação em 'b'\n");
  
  return 0;
}