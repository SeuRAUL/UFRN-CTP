#include<stdio.h>
int main(){
    int num, resul=0;
    
    printf("Informe o numero: ");
    scanf("%i", &num);
    
    do{
        resul = (resul*10)+(num%10);
        num = num/10;
    }while(num>0);
    
    printf("%i\n", resul);
    
    return 0;
}
