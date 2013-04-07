/* 
 * File:   2012939600_l11e03.c
 * Author: seuraul
 *
 * Created on 10 de Junho de 2012, 16:02
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */

int main(int argc, char** argv) {
    
    struct Tdata{
        int dia;
        int mes;
        int ano;
    }data1;
    
    printf("Informe a data: [dd/mm/aaaa] ");
    scanf("%i/%i/%i", &data1.dia, &data1.mes, &data1.ano);
    printf("%i/%i/%i\n", data1.dia, data1.mes, data1.ano);
    
    int N;
    
    if (data1.mes <= 2)
        N = (1461*(data1.ano-1))/4 + ((153*data1.mes+13)/5) + data1.dia;
    else
        N = (1461*data1.ano)/4 + ((153*data1.mes+1)/5) + data1.dia;
    
    int D = (N - 621049)%7;
    
    printf("%i\n", D);

    return (EXIT_SUCCESS);
}

