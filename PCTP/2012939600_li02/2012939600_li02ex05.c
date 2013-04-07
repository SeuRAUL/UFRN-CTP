#include<stdio.h>
int main(){
  int x, y, z, aux;

  printf("Informe o 1o numero: ");
  scanf("%i", &x);
  printf("Informe o 2o numero: ");
  scanf("%i", &y);
  printf("Informe o 3o numero: ");
  scanf("%i", &z);
  
  printf("Ordem informada: %i %i %i\n", x, y, z);
  
  if (y>z){
    aux = y;
    y = z;
    z = aux;
  }
  if (x>y){
    aux = x;
    x = y;
    y = aux;
  }
  if (y>z){
    aux = y;
    y = z;
    z = aux;
  }
  
  printf("Valores ordenados: %i %i %i\n", x, y, z);
  
  return 0;
}