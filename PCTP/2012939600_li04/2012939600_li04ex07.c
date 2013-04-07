#include<stdio.h>

int menor(int n1, int n2){
    if(n1<n2 || n1 == n2)
        return n1;
    else
        return n2;
}

int main(){
    int Dmes, Dsemana, mes=1, semana=1;
    
    printf("Informe a quantidade de dias: ");
    scanf("%i", &Dmes);
    printf("Informe o começao da semana: ");
    scanf("%i", &Dsemana);
    
    if(Dsemana > 1){
        while(semana < Dsemana){
            printf("   ");
            semana++;
        }
        
    }
    
    while(mes <= Dmes){
        while(semana < 8 && mes <= Dmes){
            if(mes < 10)
                printf(" %i ", mes);
            else
                printf("%i ", mes);
            semana++;
            mes++;
        }
        printf("\n");
        semana = 1;
    }
    
    return 0;
}