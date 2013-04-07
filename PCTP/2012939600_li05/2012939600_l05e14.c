#include<stdio.h>
int main(){
    int i=1, s=0;
    double pi=0;
    
    while(i <= 1000000){
        if(i%2 != 0){
            if(s == 0){
                pi = pi + (double) 4/i;
                s = 1;
            }else{
                pi = pi - (double) 4/i;
                s = 0;
            }
        }
        i++;
    }
    printf("%.4lf\n", pi);
    
    return 0;
}
