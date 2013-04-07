#include<stdio.h>

int menor(int n1, int n2){
    if(n1<n2 || n1 == n2)
        return n1;
    else
        return n2;
}

int main(){
    int n1, n2, n3, n4, i=1;
    
    printf("Informe o 1º numero: ");
    scanf("%i", &n1);
    printf("Informe o 2º numero: ");
    scanf("%i", &n2);
    
    
    while(i < menor(n1, n2)){
        if((n1%i == 0) && (n2%i == 0)){
            n3 = n1/i;
            n4 = n2/i;
        }
        i++;
    }
    
    printf("O irredutivel de %i/%i é: %i/%i\n", n1, n2, n3, n4);
    
    return 0;
}