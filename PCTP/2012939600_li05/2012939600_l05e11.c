#include<stdio.h>
#include<math.h>
int main(){
    int a, b, c, delta;
    
    printf("Valor de a: ");
    scanf("%i", &a);
    printf("Valor de b: ");
    scanf("%i", &b);
    printf("Valor de c: ");
    scanf("%i", &c);
    
    delta = pow(b, 2) - (4*a*c);
    
    if(delta == 0){
        printf("DUPLA\n");
        printf("x = %f\n", (float) ((-1*b) + sqrt(delta))/2*a);
    }else if(delta > 0){
        printf("REAIS DISTINTAS\n");
        printf("x\' = %f\n", (float) ((-1*b) + sqrt(delta))/2*a);
        printf("x\" = %f\n", (float) ((-1*b) + (sqrt(delta)*-1))/2*a);
    }else if(delta < 0){
        printf("COMPLEXAS\n");
        printf("x\' = %f + %fi\n", (float) ((-1*b)/2*a) , (float) (sqrt(delta*-1))/2*a);
        printf("x\" = %f - %fi\n", (float) ((-1*b)/2*a) , (float) (sqrt(delta*-1))/2*a);
    }
    
    
    return 0;
}
