/* 
 * File:   2012939600_l11e05.c
 * Author: seuraul
 *
 * Created on 12 de Junho de 2012, 10:18
 */

#include <stdio.h>
#include <stdlib.h>
#define POS 1;
#define NEG 0;
/*
 * 
 */
typedef struct Tdoadores{
    int codigo;
    char nome[51];
    char tipoS[3];
    int fatorRH;
}Tdoadores;

Tdoadores cadastro(){
    Tdoadores d;
    
    printf("Código: ");
    scanf("%i", &d.codigo);
    printf("Nome: ");
    scanf(" %[^\n]", d.nome);
    printf("Tipo sanguíneo: ");
    scanf(" %[^\n]", d.tipoS);
    printf("Fator RH [+: 1 | -: 0]: ");
    scanf("%i", &d.fatorRH);
    
    return d;
}

void imprime(Tdoadores d){
    printf("Código: %i\n", d.codigo);
    printf("Nome: %s\n", d.nome);
    printf("Tipo sanguíneo: %s", d.tipoS);
    if(d.fatorRH == 1)
        printf("+\n");
    else
        printf("-\n");
}

int main(int argc, char** argv) {
    int n, i;
    
    printf("Numero de doadores: ");
    scanf("%i", &n);
    
    Tdoadores doadores[n];
    
    for(i=0;i<n;i++){
        doadores[i] = cadastro();
    }
    
    
    int j;
    Tdoadores aux;
    for(i=0;i<n-1;i++){
        for(j=i;j<n-1;j++){
            if(doadores[j].codigo > doadores[j+1].codigo){
                aux = doadores[j];
                doadores[j] = doadores[j+1];
                doadores[j+1] = aux;
            }
        }
    }
    for(i=0;i<n;i++)
        imprime(doadores[i]);


    return (EXIT_SUCCESS);
}

