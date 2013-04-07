/* 
 * File:   2012939539_li04ex12.c
 * Author: marcocspc
 *
 * Created on 24 de Março de 2012, 17:24
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int m, n, x, y, vMax;
    x = 1;
    y = 1;
    vMax = 0;

    printf("Insira um valor para M:\n");
    scanf("%i", &m);

    printf("Insira um valor para N:\n");
    scanf("%i", &n);

    for (y; y <= n; y++) {
        for (x; x <= m; x++) {
            if ((x * y) - (x * x) + y >= vMax) {
                vMax = (x * y) - (x * x) + y;
                printf("Um dos valores maximos da expressao xy - x² + y se da com x = %i, y = %i, e o valor maximo eh %i\n", x, y, vMax);
            }
        }
        x = 1;
    }

    return (EXIT_SUCCESS);
}

