#include<stdio.h>

int main(){
    int n, i, j, cont=0;
    
    printf("Quantidade de numeros: ");
    scanf("%i", &n);
    printf("2o numero natural: ");
    scanf("%i", &i);
    printf("2o numero natural: ");
    scanf("%i", &j);
    
    while(n != 0){
        if((cont % i == 0) || (cont % j == 0)){
            printf("%i\n", cont);
            n--;
        }
        cont++;
    }
    
    return 0;
}