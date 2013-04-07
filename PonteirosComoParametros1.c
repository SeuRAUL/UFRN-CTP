#include<stdio.h>

void mult(int n, int Pquad, int Pcubo){
    Pquad = n*n;
    Pcubo = Pquad*n;
    
    printf("%i\nquadrado: %i\ncubo: %i\n", n, Pquad, Pcubo);
    
}

int main(){
    int n, Pquad=0, Pcubo=0;
    
    printf("Informe o numero: ");
    scanf("%i", &n);
    
    mult(n, Pquad, Pcubo);
    
    return 0;
}