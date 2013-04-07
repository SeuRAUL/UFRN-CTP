#include<stdio.h>
int main(){
    int n, i, dig1, dig2, seq=1;
    
    printf("Informe o numero: ");
    scanf("%i", &n);
    
    printf("Informe o 1o numero: ");
    scanf("%i", &dig1);
    
    for(i=2;i<=n;i++){
        printf("Informe o %io numero: ", i);
        scanf("%i", &dig2);
        if(dig1 != dig2)
            seq++;
        dig1 = dig2;
    }
    
    printf("%i sequencias.\n", seq);
    
    return 0;
}