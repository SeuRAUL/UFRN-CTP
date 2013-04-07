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
    int i=0, x, n, s=0;
    double cos=0;
    
    printf("Valor de x: ");
    scanf("%i", &x);
    printf("quantidade de termos: ");
    scanf("%i", &n);
    
    while(n>0){
        if(s==0){
            cos += pow(x, i)/fatorial(i);
            s=1;
        }
        else{
            cos += pow(x, i)/fatorial(i);
            s=0;
        }
        i+=2;
        n--;
    }
    
    printf("%lf\n", cos);
    
    return 0;
}
