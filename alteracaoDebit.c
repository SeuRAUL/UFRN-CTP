#include<stdio.h>
void set_bit(unsigned n, unsigned v){
    v = v | (1 << (n-1));
        printf("Novo No.: %u\n", v);
    
}


int main(){
    unsigned n, v;
    
    printf("Insira o no.: ");
    scanf("%i", &v);
    printf("Insira a posicao: ");
    scanf("%i", &n);
    
    set_bit(n, v);
    
    return 0;
}