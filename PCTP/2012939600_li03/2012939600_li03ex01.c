#include<stdio.h>
int main () {
  int n, i=0;
  int pot = 1;
  
  scanf("%i", &n);
  
  while(i<n){
    printf("%i\n", pot);
    pot = pot*2;
    i++;
  }
  
  return 0; 
}