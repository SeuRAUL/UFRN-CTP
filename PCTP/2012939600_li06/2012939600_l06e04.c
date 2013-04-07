#include <stdio.h>
int operacao(int a, int b, char c){
	if (c == 37)
	  return a % b;
	if (c == 47)
	  return a / b;
	if (c == 42)
	  return a * b;
	if (c == 43)
	  return a + b;
	if (c == 45)
	  return a - b;
}

int main(){
	int a, b;
	char c;
	scanf("%i %c %i", &a, &c, &b);
	printf("%i %c %i = %i\n", a, c, b, operacao(a, b, c));
	system("pause");
	return 0;
}
