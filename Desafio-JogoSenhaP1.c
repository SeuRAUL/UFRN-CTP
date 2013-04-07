#include<stdio.h>
int main(){
  int V1, V2, V3, V4, V, k;
  
  /* Senha a ser descoberta */
  printf("1o numero: ");
  scanf("%d", &V1);
  printf("2o numero: ");
  scanf("%d", &V2);
  printf("3o numero: ");
  scanf("%d", &V3);
  printf("4o numero: ");
  scanf("%d", &V4);
  
  /* tentativa de descoberta */
  printf("Numero a ser buscado: ");
  scanf("%d", &V);
  printf("Posicao: ");
  scanf("%d", &k);
  
  /* Resultados */
  if ((V1 == V && 1 == k) || (V2 == V && 2 == k) || (V3 == V && 3 == k) || (V4 == V && 4 == k))    /* Se V1 [posicao 1] for igual a V [numero a testar] E a posicao escolhida é igual. O mesmo pras 4 posicoes com o 'OU' */
      printf("Vermelho\n\n");
  else if ((V1 == V && 1 != k) || (V2 == V && 2 != k) || (V3 == V && 3 != k) || (V4 == V && 4 != k)) /* Se V1 [posicao 1] for igual a V [numero a testar] E a posicao escolhida é diferente. O mesmo pras 4 posicoes com o 'OU' */
      printf("Branco\n\n");
  
  return 0;
}