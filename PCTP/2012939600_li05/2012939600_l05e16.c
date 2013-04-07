#include<stdio.h>
#include<math.h>
int fatorial(int f){
    int i, fat=1;
    for(i=2;i<=f;i++){
        fat = fat*i;
    }
    return fat;
}

int main(){
    int i=1, termos=0;
    double e, x;
    
    printf("Valor de x: ");
    scanf("%lf", &x);
    
    e = 1;
    
    while(i <= e){
        e += (double) pow(x, i)/fatorial(i);
        termos++;
        i++;
    }
    
    printf("e^x = %lf\nTermos = %i\n", e, termos);
    
    return 0;
}