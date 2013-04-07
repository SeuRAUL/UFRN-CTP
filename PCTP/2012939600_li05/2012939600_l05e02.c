#include <stdio.h>

int main() {
    unsigned int num;
    int decimal=1, resul=0;
    
    printf("Informe o numero: ");
    scanf("%i", &num);
    
    do{
        if(num%2 == 1)
            resul += decimal;
        num = num/2;
        decimal = decimal*10;
    }while(num>=1);
    
    printf("%i\n", resul);

    return 0;
}

