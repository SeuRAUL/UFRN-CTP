#include<stdio.h>
int main () {
  int p=0, temp=0, dias=0;
  
  while(p < 31) {
    printf("temperatura do dia %i: ", p);
    scanf("%i", &temp);
    if(temp < 0)
      dias++;
    p++;
  }
  
  printf("%i dias com temp abaixo de 0\n", dias);
  
  return 0;
}