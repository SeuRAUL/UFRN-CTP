/* 
 * File:   2012939539_li04ex14.c
 * Author: marcocspc
 *
 * Created on 25 de Março de 2012, 11:47
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int n, divisor, multiplicidade;
    divisor = 2;
    multiplicidade = 0;

    printf("Insira um valor para ser fatorado:\n");
    scanf("%i", &n);

    while (n > 1) {
        while (n % divisor == 0) {
            n = n / divisor;1
            multiplicidade++;
        }
        
        if (multiplicidade > 0) {
            printf("    Fator %i multiplicidade %i\n", divisor, multiplicidade);
            divisor++;
            multiplicidade = 0;
        } else {
            divisor++;
        }
    }

    return (EXIT_SUCCESS);
}

