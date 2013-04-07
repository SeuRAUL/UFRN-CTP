#include<stdio.h>

int getbit1(unsigned int v){
    int i=0;
    
    if(v == 0)
        return -1;
    else{
        while(v > 0){
            if(v & (1 << i))
                return i;
            i++;
        }
    }
    return 0;
}

int main(){
    unsigned int v;
    
    printf("informe o numero: ");
    scanf("%u", &v);
    
    printf("%i\n", getbit1(v));
    
    return 0;
}