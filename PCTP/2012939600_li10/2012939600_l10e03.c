/* Seu_RAUL
 * PCTP -> Lista10.Questao03*/

#include<stdio.h>
#define MAX 100

void identidade(int I[MAX][MAX], int n){
  int i, j;
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      if(i == j)
	I[i][j] = 1;
      else
	I[i][j] = 0;
    }
  }
}

void multMat(int C[MAX][MAX], int A[MAX][MAX], int B[MAX][MAX], int n){
  int i, j;
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      C[i][j] = A[i][j]*B[i][j];
    }
  }
}

void copia(int A[MAX][MAX], int B[MAX][MAX], int n){
  int i, j;
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      A[i][j] = B[i][j];
    }
  }
}

/* Programa que recebe uma matriz de números inteiros A de dimensão n e um inteiro k e computa e imprime A^k . */
int main(){
  int n, k, i, j;
  
  printf("Informe a dimenção da matriz: ");
  scanf("%i", &n);
  
  int A[n][n], B[n][n],C[n][n];
  
  printf("Informe a potencia de A: ");
  scanf("%i", &k);
  
  if(k == 0)
    identidade(C, n);
  else{
    
    for(i=0;i<n;i++){
      for(j=0;j<n;j++){
	printf("Posição [%i, %i] ", i, j);
	scanf("%i", &A[i][j]);
      }
    }
    
    copia(B, A, n);
    for(i=0;i<k-1;i++){
      multMat(C, A, B, n);
      copia(A, C, n);
    }
    multMat(C, A, B, n);
    copia(A, C, n);
    /*identidade(B, n);
    multMat(C, A, B, n);*/
    
  }
  
  
  for (i = 0; i < n; i++){
    for (j = 0; j < n; j++)
      printf("%03i ", C[i][j]);
      printf("\n");
  }
  
  
  return 0;
}