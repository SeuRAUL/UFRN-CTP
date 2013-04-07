/* 
 * File:   2012399600_l11e02.c
 * Author: seuraul
 *
 * Created on 10 de Junho de 2012, 15:17
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int f(int ano, int mes){
    if(mes <= 2) return ano-1;
    else return ano;
}

int g(int mes){
    if(mes <= 2) return mes+13;
    else return mes+1;
}

int main() {
    
    struct Tdata{
        int dia;
        int mes;
        int ano;
    }data1, data2;
    
    printf("Informe a 1ª data: [dd/mm/aaaa] ");
    scanf("%d/%d/%d", &data1.dia, &data1.mes, &data1.ano);
    printf("Informe a 2a data: [dd/mm/aaaa] ");
    scanf("%d/%d/%d", &data2.dia, &data2.mes, &data2.ano);

    int N1 = ((1461 * f(data1.ano, data1.mes))/4) + ((153 * g(data1.mes))/5) + data1.dia;
    int N2 = ((1461 * f(data2.ano, data2.mes))/4) + ((153 * g(data2.mes))/5) + data2.dia;
    printf("%i\n%i\n", N1, N2);
    
    if(N1 < N2)
        printf("Tempo decorrido: %i\n", N2 - N1);
    else
        printf("Tempo decorrido: %i\n", N1 - N2);

    return 0;
}