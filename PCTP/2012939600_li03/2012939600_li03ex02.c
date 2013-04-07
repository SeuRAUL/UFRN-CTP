#include<stdio.h>
int main() {
  int x, n, i=0, num=1;
  
  scanf("%i", &x);
  scanf("%i", &n);
  
  while(i<n){
    num = num*x;
    i++;
  }
  printf("%i\n", num);
  
  return 0;
}