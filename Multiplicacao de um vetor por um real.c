#include<stdio.h>
int main(){
  int i, n, k;
  
  printf("Tamanho do vetor: ");
  scanf("%i", &n);
  printf("Multiplicador: ");
  scanf("%i", &k);
  
  double v[n], m[n];
  
  for(i=0;i<n;i++){
    printf("v[%i]: ", i);
    scanf("%lf", &v[i]);
  }
  
  for(i=0;i<n;i++){
    m[i] = v[i]*k;
  }
  
  for(i=0;i<n;i++){
    printf("m[%i] = %lf\n", i, m[i]);
  }
  
  return 0;
}