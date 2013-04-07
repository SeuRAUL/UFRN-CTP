/* Seu_RAUL
 * PCTP -> Lista10.Questao01*/

#include<stdio.h>
# define MAX 100

void intersec(int A[MAX+1], int B[MAX+1], int C[MAX+1]){
  int i, j, k=1;
  C[0] = 0;
  
  for(i=1;i<A[0]+1;i++){
    for(j=1;j<B[0]+1;j++){
      if(A[i] == B[j]){
	C[k] = B[j];
	k++;
	C[0]++;
      }
    }
  }
}

/* Programa que lê um número inteiro 'n' e uma seqüência de 'n' conjuntos de números inteiros, cada um com no máximo 100 elementos, e construa e imprima um vetor que representa a intersecção dos 'n' conjuntos. */
int main(){
  int n, A[MAX+1], B[MAX+1], C[MAX+1];
  
  printf("Informe a quantidade de conjuntos: [>=2] ");
  scanf("%i", &n);
  
  printf("Informe o tamanho do 1º conjunto: ");
  scanf("%i", &A[0]);
  
  int i;
  for(i=1;i<A[0]+1;i++){
    printf("Valor %i: ", i);
    scanf("%i", &A[i]);
  }
  
  n -= 1;
  while(n > 0){
    printf("Informe o tamanho do proximo conjunto: ");
    scanf("%i", &B[0]);
    
    for(i=1;i<B[0]+1;i++){
      printf("Valor %i: ", i);
      scanf("%i", &B[i]);
    }
    
    intersec(A, B, C);
    
    for(i=0;i<B[0]+1;i++){
      A[i] = B[i];
      
    }
    n--;
  }
  
  printf("A intersecção B:\n");
  for(i=1;i<=C[0];i++){
    printf("%i\n", C[i]);
  }
  return 0;
}