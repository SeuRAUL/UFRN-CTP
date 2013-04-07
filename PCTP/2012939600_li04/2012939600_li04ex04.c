#include<stdio.h>

int testar(int n, int num){
    if((n * (n+1) * (n+2)) == num)
        return 1;
    else
        return 0;
}

int main(){
    int n=0, num, teste;
    
    printf("Informe o numero: ");
    scanf("%i", &num);
    
    while((n * (n+1) * (n+2)) <= num){
        teste = testar(n, num);
        n++;
    }
    
    if(teste == 1)
        printf("%i é triangular!\n", num);
    else
        printf("%i NÃO é triangular!\n", num);
    
    return 0;
}