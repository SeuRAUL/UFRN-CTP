/* Seu_RAUL
 * PCTP -> Lista09.Questao09*/

#include<stdio.h>
void quebra(int n, int *prim, int *ult, int *miolo){
  *ult = n%10;
  n = n/10;
  
  int dec = 1;
  while(n >= 10){
    *miolo += n%10*dec;
    n = n/10;
    dec = dec*10;
  }
    
  *prim = n;
}
/*  Programa que recebe um número inteiro n > 0 e verifica se n é palíndromo. */
int main(){
  int n, prim, ult, miolo, teste = 1;
  
  printf("Informe o numero: ");
  scanf("%i", &n);
  
  do{
    miolo = 0;
    quebra(n, &prim, &ult, &miolo);
    if(prim != ult){
      printf("Não é palindromo!\n");
      teste = 0;
      break;
    }
    n = miolo;
  }while(n > 9);
  
  if(teste == 1)
    printf("É palindromo!\n");
  
  return 0;
}