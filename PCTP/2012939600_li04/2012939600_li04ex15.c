/* 
 * File:   2012939539_li04ex15.c
 * Author: marcocspc
 *
 * Created on 25 de Março de 2012, 13:38
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int mdc(int a, int b) {
    while (a > 0 && b > 0) {
        if (a >= b) {
            a = a - b;
        } else {
            b = b - a;
        }
    }
    
    if (a > 0) {
        return a;
    } else {
        return b;
    }
}


int main(int argc, char** argv) {
    int n, num, maximoDivisorComum, cont;
    maximoDivisorComum = 1;
    
    printf("Insira a quantidade de numeros que voce usar para calcular o mdc:\n");
    scanf("%i", &n);
    
    printf("Sera calculado o mdc de %i numeros!\n", n);
    
    for (cont = 0; cont < n; cont++) {
        printf("Insira o numero %i:\n", cont + 1);
        scanf("%i", &num);
        
        if (cont == 0) {
            maximoDivisorComum = num;
            maximoDivisorComum = mdc(maximoDivisorComum, num);
        } else {
            maximoDivisorComum = mdc(maximoDivisorComum, num);
        }
    }
    
    printf("O mdc entre os %i numeros foi: %i\n", n, maximoDivisorComum);
    
    

    return (EXIT_SUCCESS);
}