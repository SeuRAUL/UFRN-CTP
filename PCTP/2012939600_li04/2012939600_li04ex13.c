/* 
 * File:   2012939539_li04ex13.c
 * Author: marcocspc
 *
 * Created on 24 de Março de 2012, 18:00
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int m, n, soma, cont;
    n = 1;
    soma = 0;
    cont = 1;
    
    printf("Insira um valor qualquer M:\n");
    scanf("%i", &m);
    
    for (n; n <= m; n++) {
        printf("%i³ = ", n);
        while (soma < (n * n * n)) {
            if (cont % 2 == 1) {
                printf("%i", cont);
                printf(" + ");
                soma += cont;
            }
            cont ++;
        }
        soma = 0;
        printf("0\n");
        
    }
    
    
    return (EXIT_SUCCESS);
}

