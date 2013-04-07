#include<stdio.h>

int primo(int n){
    int i = 1, quant=0;
    while(i <= n){
        if(n%i == 0)
            quant++;
        i++;
    }
    if(quant == 1 || quant == 2)
        return 1;
    else
        return 0;
}

int main(){
    int n, num, soma=0, i=1;
    
    printf("Informe a quantidade de sequencias: ");
    scanf("%i", &n);
    
    while(i <= n){
        printf("Informe o numero: ");
        scanf("%i", &num);
        
        if(primo(num) == 1){
            soma = soma + num;
        }
        i++;
    }
    
    printf("%i\n", soma);
    
    return 0;
}