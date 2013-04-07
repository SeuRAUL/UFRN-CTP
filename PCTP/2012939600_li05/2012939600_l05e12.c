#include<stdio.h>
int main(){
    int n, i;
    double soma=0;
    
    printf("Valor de n: ");
    scanf("%i", &n);
    
    for(i=1;i<=n;i++){
        soma += (double) i/(n-(i-1));
    }
    
    printf("%lf\n", soma);
    
    return 0;
}
