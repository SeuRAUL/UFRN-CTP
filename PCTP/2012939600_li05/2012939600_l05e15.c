#include<stdio.h>
#include<math.h>
int main(){
    int i=1, s=0;
    double x, arctan=0.0;
    
    printf("valor de x: [de 0 a 1] ");
    scanf("%lf", &x);
    
    while((pow(x, i)/i) >= 0.0001){
        if(i%2 != 0){
            if(s == 0){
                arctan += pow(x, i)/i;
                s = 1;
            }else{
                arctan -= pow(x, i)/i;
                s = 0;
            }
        }
        i += 2;
    }
    
    printf("%lf\n", arctan);
    
    return 0;
}
