/* Seu_RAUL
 * PCTP -> Lista10.Questao04*/

#include<stdio.h>
#define MAX 10

int linha(int A[MAX][MAX], int n, int i){
  int c, nu, teste=1;
  for(c=0;c<n;c++){
    if(teste != 1) return 0;
    teste = 0;
    for(nu=1;nu<=n;nu++){
      if(A[i][c] == nu){
	teste++;
      }
    }
  }
  return 1;
}

int coluna(int A[MAX][MAX], int n, int j){
  int c, nu, teste=1;
  for(c=0;c<n;c++){
    if(teste != 1) return 0;
    teste = 0;
    for(nu=1;nu<=n;nu++){
      if(A[c][j] == nu){
	teste++;
      }
    }
  }
  return 1;
}

/* Programa que verifica se uma dada matriz An×n de números inteiros, com 1 <= n <= 100, é um quadrado latino de ordem n. */
int main(){
  int n;
  
  printf("Ordem da matriz: ");
  scanf("%i", &n);
  
  int A[n][n];
  
  int p, q;
  for (p = 0; p < n; p++) {
    for (q = 0; q < n; q++){
      printf("Posição [%i, %i] ", p, q);
      scanf("%i", &A[p][q]);
    }
  }
  
  int teste;
  for (p = 0; p < n; p++) {
    teste = linha(A, n, p);
    if(teste == 0)
      break;
  }
  
  if(teste != 0){
    for (p = 0; p < n; p++) {
      teste = coluna(A, n, p);
      if(teste == 0)
	break;
    }
  }
  
  if(teste != 0)
    printf("É quadrado latino!\n");
  else
    printf("Não é quadrado latino\n");
  
  return 0;
}