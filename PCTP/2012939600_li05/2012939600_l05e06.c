#include<stdio.h>
int main(){
    int n, dig1, dig2, seq=1, comp=0;
    
    printf("Informe o numero: ");
    scanf("%i", &n);
    
    printf("Informe o 1o numero: ");
    scanf("%i", &dig1);
    
    while(n>1){
        printf("Informe o próx. numero: ");
        scanf("%i", &dig2);
        if(dig1<dig2){
            seq++;
        }
        else{
            seq = 1;
        }
        
        if(seq>comp)
            comp = seq;
        
        dig1 = dig2;
        n--;
    }
    
    printf("Seguimento máximo: %i\n", comp);
    
    return 0;
}