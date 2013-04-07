#include<stdio.h>
int mult(int a, int b){
  int result=0;
  if(a == 1) return b;
  
  do{
    if(a%2 != 0) result += b;
    a = a/2;
    b = b*2;
  }while(a != 1);
  result += b;
  return result;
}

int main (){
  int a, b;
  
  printf("Digite dois valores para multiplicação: ");
  scanf("%i %i", &a, &b);
  
  printf("%i * %i = %i\n", a, b, mult(a, b));
  
  return 0;
}