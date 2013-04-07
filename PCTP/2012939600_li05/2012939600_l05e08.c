#include<stdio.h>
#include<math.h>
int main(){
    int n, i, cont=0;
    float x, y;
    
    printf("Informe a quantidade de pontos: ");
    scanf("%i", &n);
    
    for(i=0;i<n;i++){
        printf("Informe x: ");
        scanf("%f", &x);
        printf("Informe y: ");
        scanf("%f", &y);

        if((x <= 0 && y<=0 && (y + pow(x, 2) + (2*x) -3 == 0)) || (x >= 0 && (y + pow(x, 2) + (2*x)-3 == 0))){
            printf("O ponto (%f, %f) pertence ao conjunto.\n", x, y);
            cont++;
        }
/*
        if(x>1)){
            printf("O ponto (%f, %f) pertence ao conjunto.\n", x, y);
            cont++;
        }
*/
    }
    printf("%i numeros pertencem.\n", cont);
    
    return 0;
}
