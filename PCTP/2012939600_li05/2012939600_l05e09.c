#include<stdio.h>
#include<math.h>
int main(){
    int n, i;
    double harmonico=0.0;
    
    printf("Informe o numero: ");
    scanf("%i", &n);
    
    for(i=1;i<=n;i++){
        harmonico += (double) 1/i;
    }
    
    printf("%lf\n", harmonico);
    
    return 0;
}
