#include <stdio.h>

int value(char a){
	if (a > 90) a -= 32;
	if (a == 'D' || a == 'G')
	  return 2;
	else if (a == 'B' || a == 'C' || a == 'M' || a == 'P')
	  return 3;
	else if (a == 'F' || a == 'H' || a == 'V' || a == 'W' || a == 'Y')
	  return 4;
	else if (a == 'K')
	  return 5;
	else if (a == 'J' || a == 'X')
	  return 8;
	else if (a == 'Z' || a == 'Q')
	  return 10;
	else
	  return 1;
	
}

int main(){
	char a = 1;
        int resul = 0;
	printf("Informe o numero [0 no final].\n");
	while(a != 0){
		scanf("%c", &a);
		if (a == 0 || a == '0')
		  break;
		else resul += value(a);
	}
	printf("%i\n", resul);
	return 0;
}
