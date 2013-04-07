#include<stdio.h>
int main(){
  int V1, V2, V3, V4, R1, R2, R3, R4, vermelho, branco;
  
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
  printf("\nAdivinhacao: \n");
  printf("1o numero: ");
  scanf("%d", &R1);
  printf("2o numero: ");
  scanf("%d", &R2);
  printf("3o numero: ");
  scanf("%d", &R3);
  printf("4o numero: ");
  scanf("%d", &R4);
  
  /* Resultados */  
  vermelho = 0;
  branco = 0;
  
  if (V1 == R1)
    vermelho = vermelho + 1;
  if (V3 == R3)
    vermelho = vermelho + 1;
  if (V3 == R3)
    vermelho = vermelho + 1;
  if (V4 == R4)
    vermelho = vermelho + 1;
  
  if (V1 == R2 || V1 == R3 || V1 == R4)
    branco = branco + 1;
  if (V2 == R1 || V2 == R3 || V2 == R4)
    branco = branco + 1;
  if (V3 == R1 || V3 == R2 || V3 == R4)
    branco = branco + 1;
  if (V4 == R1 || V4 == R2 || V4 == R3)
    branco = branco + 1;
  
  printf("\n%i Vermelhos\n%i Brancos\n", vermelho, branco);
  
  return 0;
}