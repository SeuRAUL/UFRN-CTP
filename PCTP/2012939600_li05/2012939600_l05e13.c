#include<stdio.h>
int main(){
    int i;
    double soma=0;
    
    for(i=1;i<=1000;i++){
        if(i%2!=0)
            soma = soma + (double) 1/i;
        else
            soma = soma - (double) 1/i;
    }
    printf("(a) %lf\n", soma);
    soma=0;
    
    for(i=1000;i>=1;i--){
        if(i%2!=0)
            soma = soma + (double) 1/i;
        else
            soma = soma - (double) 1/i;
    }
    printf("(b) %lf\n", soma);
    soma=0;
    
    for(i=1;i<=1000;i++){
        if(i%2!=0)
            soma = soma + (double) 1/i;
    }
    for(i=1;i<=1000;i++){
        if(i%2==0)
            soma = soma - (double) 1/i;
    }
    printf("(c) %lf\n", soma);
    soma=0;
    
    for(i=1000;i>=1;i--){
        if(i%2!=0)
            soma = soma + (double) 1/i;
    }
    for(i=1000;i>=1;i--){
        if(i%2==0)
            soma = soma - (double) 1/i;
    }
    printf("(d) %lf\n", soma);
    
    return 0;
}
