#include<stdio.h>
void print_bit(unsigned n, unsigned v){
    if(v & (1 << n-1))
        printf("Bit: %i\n", 1);
    else
        printf("Bit: %i\n", 0);
}


int main(){
    unsigned n, v;
    
    printf("Insira o no.: ");
    scanf("%i", &v);
    printf("Insira a posicao: ");
    scanf("%i", &n);
    
    print_bit(n, v);
    
    return 0;
}