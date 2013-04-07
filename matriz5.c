#include<stdio.h>
int identidade(int n, double matriz[n][n]){
    int l, c;
    for(l=0;l<n;l++){
        for(c=0;c<n;c++){
            if((l==c && matriz[l][c] != 1) || (l!=c && matriz[l][c] != 0)){
                return 2;
            }
        }
    }
    return 1;
}
int main(){
    int n;
    
    printf("Tamanho da matriz: ");
    scanf("%i", &n);
    
    double matriz[n][n];
    
    int l, c;
    for(l=0;l<n;l++){
        for(c=0;c<n;c++){
            printf("valor da posicao [%i][%i]: ", l, c);
            scanf("%lf", &matriz[l][c]);
        }
    }
    
    if(identidade(n, matriz) == 1) printf("É matriz identidade\n");
    else printf("NÃO é matriz identidade\n");
    
    return 0;
}
