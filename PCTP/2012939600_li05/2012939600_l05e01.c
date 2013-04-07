#include <stdio.h>
#include <stdlib.h>

int potencia(int numero, int potencia){
    int p=1, n=numero;
    if(potencia != 0){
        while(p<potencia){
            numero = numero*n;
            p++;
        }
    }else{
        numero = 0;
    }
    return numero;
}

int main() {
    int num;
    int i=1, soma=0;
    
    printf("Informe o numero binario: ");
    scanf("%i", &num);
    
    if(num%10 == 1){
        soma += num%10;
    }
    num = num/10;
    
    while(num >= 10){
        if(num%10 ==1){
            soma += ((num%10) * potencia(2,i));
        }
        num = num/10;
        i++;
    }
    if(num == 1)
        soma += (num * potencia(2,i));
    
    printf("%i\n", soma);

    return 0;
}

