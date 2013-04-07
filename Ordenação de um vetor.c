#include<stdio.h>
void sort_array(int n, double v[]){
  int i, j;
  double aux;
  for(i=0;i<n;i++){
    for(j=0;j<n-1;j++){
      if(v[j]>v[j+1]){
	aux = v[j];
	v[j] = v[j+1];
	v[j+1] = aux;
      }
    }
  }
}
int main(){
  int i, n;
  
  printf("Tamanho do vetor: ");
  scanf("%i", &n);
  
  double a[n];
  
  for(i=0;i<n;i++){
    printf("Array[%i]: ", i);
    scanf("%lf", &a[i]);
  }
  
  sort_array(n, a);
  
  for(i=0;i<n;i++){
    printf("Arrary[%i]: %lf\n", i, a[i]);
  }
  
  return 0;
}