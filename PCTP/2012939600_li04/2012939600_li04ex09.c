#include<stdio.h>

int main(){
    int n, num, i=1, dois=0, tres=0, cinco=0, sete=0;
    
    printf("Informe a quantidade de sequencias: ");
    scanf("%i", &n);
    
    while(i <= n){
        printf("numero a fatorar: ");
        scanf("%i", &num);
        
        printf("%i = ", num);
        
        while(num%2 == 0){
            dois++;
            num = num/2;
        }
        while(num%3 == 0){
            tres++;
            num = num/3;
        }
        while(num%5 == 0){
            cinco++;
            num = num/5;
        }
        while(num%7 == 0){
            sete++;
            num = num/7;
        }
        if(dois != 0)
            printf("2^%i\n", dois);
        if(tres != 0)
            printf("3^%i\n", tres);
        if(cinco != 0)
            printf("5^%i\n ", cinco);
        if(sete != 0)
            printf("7^%i\n ", sete);
        
        if (num != 1)
            printf("%i^1\n", num);
        
        i++;
        dois=0;
        tres=0;
        cinco=0;
        sete=0;
    }
    
    return 0;
}