#include<stdio.h>
int main(){
    int l, c;
    
    printf("Tamanho de linhas: ");
    scanf("%i", &l);
    printf("Tamanho de colunas: ");
    scanf("%i", &c);
    
    
    double A[l][c], B[l][c];
    
    int li, co;
    for(li=0;li<l;li++){
        for(co=0;co<c;co++){
            printf("valor da posicao [%i][%i]: ", li, co);
            scanf("%lf", &A[li][co]);
        }
    }
    
    int k;
    printf("valor de k: ");
    scanf("%i", &k);
    
    for(li=0;li<l;li++){
        for(co=0;co<c;co++){
            B[li][co] = A[li][co] * k;
            printf("%.1lf ", B[li][co]);
        }
        printf("\n");
    }
    
    return 0;
}
