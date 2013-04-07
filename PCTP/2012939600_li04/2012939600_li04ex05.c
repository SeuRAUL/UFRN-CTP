#include<stdio.h>

int mdc(int n1, int n2){
    int aux;
    while(n1%n2 != 0){
        aux = n1%n2;
        n1 = n2;
        n2 = aux;
    }
    aux = n1%n2;
    n1 = n2;
    
    return n1;
}

int main(){
    int n1, n2;
    
    printf("Informe o 1º numero: ");
    scanf("%i", &n1);
    printf("Informe o 2º numero: ");
    scanf("%i", &n2);
    
    printf("O mdc de %i e %i é: %i\n", n1, n2, mdc(n1, n2));
    
    return 0;
}