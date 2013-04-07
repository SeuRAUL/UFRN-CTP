#include<stdio.h>
#include<math.h>
int main(){
    int n, i;
    float x, y;
    
    printf("Informe a quantidade de pontos: ");
    scanf("%i", &n);
    
    for(i=0;i<n;i++){
        printf("Informe x: ");
        scanf("%f", &x);
        printf("Informe y: ");
        scanf("%f", &y);

        if((pow(x, 2) + pow(y, 2)) <= 1)
            printf("O ponto (%f, %f) pertence a figura.\n", x, y);
    }
    
    return 0;
}
