#include<stdio.h>
int menor(int a, int b){
  if(a<b)
	 return a;
  else
	 return b;
}

int main(){
  int a, b, i=1;
  
  printf("Digite os dois valores: ");
  scanf("%i %i", &a, &b);
  
  while(i <= menor(a, b)){
	 if((a%i == 0) && (b%i == 0)){
		a = a/i;
		b = b/i;
	 }
	 i++;
  }
		printf("%i/%i\n", a, b);
		
  
  
  return 0;
}