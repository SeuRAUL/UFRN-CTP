/* 
 * File:   2012939600_l11e01_.c
 * Author: seuraul
 *
 * Created on 10 de Junho de 2012, 14:32
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
    
    struct Ttempo {
        int hora;
        int minuto;
        int segundo;
    } t1, t2, tr;
    
    printf("Informe o 1o horário: [hh:mm:ss] ");
    scanf("%d:%d:%d", &t1.hora, &t1.minuto, &t1.segundo);
    printf("Informe o 2o horário: [hh:mm:ss] ");
    scanf("%d:%d:%d", &t2.hora, &t2.minuto, &t2.segundo);
    
    if(t1.hora >= t2.hora){
        tr.hora = t1.hora - t2.hora;
        if(t1.minuto >= t2.minuto)
            tr.minuto = t1.minuto - t2.minuto;{
            if(t1.segundo >= t2.segundo){
                tr.segundo = t1.segundo - t2.segundo;
            }
        }
    }
    if(t2.hora >= t1.hora){
        tr.hora = t2.hora - t1.hora;
        if(t2.minuto >= t1.minuto)
            tr.minuto = t2.minuto - t1.minuto;{
            if(t2.segundo >= t1.segundo){
                tr.segundo = t2.segundo - t1.segundo;
            }
        }
    }
    
    printf("%02i:%02i:%02i\n", tr.hora, tr.minuto, tr.segundo);

    return (EXIT_SUCCESS);
}

