#include <stdio.h>
#include <stdlib.h>
double modulo (double a) {
    if (a < 0) {
        return -a;
    } else {
        return a;
    }
}

int main(int argc, char** argv) {
    double x, y = 1, xPorY = 0, media = 1, epsilon;
    int cont = 0;
    
    printf("Informe a  precisao: (Quanto menor o valor, melhor)\n");
    scanf("%lf", &epsilon);
    
    printf("Numero para calculo da raiz quadrada:\n");
    scanf("%lf", &x);
    
    do {
        y = media;
        xPorY = x / y;
        media = (y + xPorY )/ 2;
        cont ++;
    } while (modulo(media - y) >= epsilon);    
    
    printf("O resultado foi %lf em %i passos!\n", y, cont);
    

    return 0;
}



