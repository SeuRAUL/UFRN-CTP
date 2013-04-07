#include<stdio.h>
int main(){
  int i, n;
  
  printf("Informe o tamanho dos vetores: ");
  scanf("%i", &n);
  
  double v[n], w[n], produto=0;
  
  for(i=0;i<n;i++){
    printf("valor de v[%i]: ", i+1);
    scanf("%lf", &v[i]);
  }
  for(i=0;i<n;i++){
    printf("valor de w[%i]: ", i+1);
    scanf("%lf", &w[i]);
  }
  
  for(i=0;i<n;i++){
    produto += v[i]*w[i];
  }
  
  printf("Produto = %lf\n", produto);
  
  return 0;
}