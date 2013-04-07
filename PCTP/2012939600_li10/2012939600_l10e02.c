/* Seu_RAUL
 * PCTP -> Lista10.Questao02*/

#include<stdio.h>
# define MAX 100

void ordena_insercao(int A[MAX], int m){
  int i, j, aux;
  for(i=1;i<m;i++){
    for(j=i;j>0;j--){
      if(A[j] < A[j-1]){
	aux = A[j-1];
	A[j-1] = A[j];
	A[j] = aux;
      }
    }
  }
}

void intercala(int A[MAX], int m, int B[MAX], int n, int C[2*MAX], int *q){
  int i, j=0, k=0;
  for(i=0;i<m;i++){
    if(A[i] < B[j]){
      C[k] = A[i];
      k++;
      if(j==n) break;
    }
    else if(A[i] == B[j] && j<n){
      C[k] = A[i];
      k++;
      j++;
      if(j==n) break;
    }
    else if(A[i] > B[j] && j<n){
      while(B[j] < A[i] && j<n){
	C[k] = B[j];
	k++;
	j++;
	if(j==n) break;
      }
      if(j==n) break;
    }
    if(j==n) break;
  }
  
  while(i<m){
    if(A[i] > C[k-1]){
      C[k] = A[i];
      k++;
    }
    i++;
  }
  while(j<n){
    if(B[j] > C[k-1]){
      C[k] = B[j];
      k++;
    }
    j++;
  }
  *q = k;
}

/* Programa que recebe dois conjuntos de números inteiros e distintos X e
Y , com no máximo 100 elementos, ordena-os usando a função ordena_insercao()
e intercala os vetores usando a função intercala(), obtendo como resultado
um vetor de números inteiros em ordem crescente. */
int main(){
  int X[MAX], x, Y[MAX], y, Z[2*MAX], z, i;
  
  printf("Tamanho do conjunto X: ");
  scanf("%i", &x);
  
  for(i=0;i<x;i++){
    printf("valor %i de X: ", i+1);
    scanf("%i", &X[i]);
  }
  
  ordena_insercao(X, x);
  
  printf("Tamanho do conjunto Y: ");
  scanf("%i", &y);
  
  for(i=0;i<y;i++){
    printf("valor %i de Y: ", i+1);
    scanf("%i", &Y[i]);
  }
  
  ordena_insercao(Y, y);
  
  intercala(X, x, Y, y, Z, &z);
  
  printf("Z:\n");
  for(i=0;i<z;i++){
    printf("%i\n", Z[i]);
  }
  
  
  return 0;
}