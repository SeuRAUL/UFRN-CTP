#include<stdio.h>
int main(){
    int n, num, n_teste, digitos=1, decimal=1;
    
    printf("Informe o numero: ");
    scanf("%i", &n);
    
    /*Verifica a quantidade de digitos no numero*/
    n_teste = n;
    num = n;
    while(n_teste>=10){
        digitos++;
        n_teste = n_teste/10;
    }
    
    /*Retira a primeira metade do numero*/
    int metade_anterior=0, resul=0, i;
    for(i=1;i<=(digitos/2);i++){
        metade_anterior += (n%10)*decimal;
        decimal = decimal*10;
        n = n/10;
    }
    
    /*Se a quantidade de digitos for impar, retira o numero do meio*/
    if(digitos%2 != 0)
        n = n/10;
    
    /*Inverte a ordem dos numeros da 2ª metade*/
    do{
        resul = (resul*10)+(n%10);
        n = n/10;
    }while(n>0);
    

    /*Testa a primeira metade com a segunda invertida*/    
    if(metade_anterior == resul){
        printf("%i é palindromo.\n", num);
    }else
        printf("%i não é palindromo.\n", num);
    
    return 0;
}
