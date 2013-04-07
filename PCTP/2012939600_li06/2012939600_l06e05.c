#include <stdio.h>

int main(){
	int n, f1 = 1, f2 = 1, f3, x;
	scanf("%i", &n);
	if ( n < 1 )
	  return 0;
	if (n == 1 || n == 2)
	  f3 = 1;
	else{
		for (x = 0; x < n - 2; x++){
			f3 = f2 + f1;
			f1 = f2;
			f2 = f3;
		}
	}
	printf("%i\n", f3);
}
