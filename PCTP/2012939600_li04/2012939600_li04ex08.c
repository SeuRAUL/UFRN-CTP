#include<stdio.h>

int main(){
    int n, num, i=1, soma=0;
    
    printf("Informe a quantidade de sequencias: ");
    scanf("%i", &n);
    while(i <= n){
        printf("Informe %ia sequencia: ", i);
        scanf("%i", &num);
        while(num >= 10){
            if((num%10)%2 == 0)
                soma = soma + num%10;
            num = num/10;
        }
        if((num%10)%2 == 0)
            soma = soma + num%10;
        printf("Soma de pares da %ia sequencia: %i\n", i, soma);
        soma = 0;
        i++;
    }
    
    return 0;
}