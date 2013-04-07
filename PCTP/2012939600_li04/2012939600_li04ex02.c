#include<stdio.h>
int comparador(int teste, int n){
    if (teste == n%10)
        return 1;
    else
        return 0;
}

int main(){
    int n, digito=99, teste=0;
    
    printf("Digite um numero: ");
    scanf("%i", &n);
    
    if(n>10){
        digito = n%10;
        n = n/10;
    }
    
    while(n>10){
        n = n/10;
    }
    
    teste = comparador(digito, n);
    
    if(teste == 1)
        printf("1st e ultimo digitos IGUAIS!\n");
    else
        printf("1st e ultimo digitos DIFERENTES!\n");
    
    return 0;
}