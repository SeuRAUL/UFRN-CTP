#include<stdio.h>
int array_sub(int n1, int n2, int w1[n1], int w2[n2]){
    int i, j, teste=0;
    if(n2<=n1){
        for(i=0;i<=n1-n2;i++){
            if(w1[i] == w2[0]){
                for(j=0;j<n2;j++){
                    if(w1[i+j] == w2[j]){
                        teste = 1;
                    }
                    else{
                        teste = 0;
                        break;
                    }
                }
            }
        }
    }
    return teste;
}
int main(){
    int n1, n2, i;
    
    printf("Tamanho do vetor 1: ");
    scanf("%i", &n1);
    printf("Tamanho do vetor 2: ");
    scanf("%i", &n2);
    
    int w1[n1], w2[n2];
    
    i=0;
    while(i<n1){
        printf("posicao %i do vetor 1: ", i);
        scanf("%i", &w1[i]);
        i++;
    }
    
    i=0;
    while(i<n2){
        printf("posicao %i do vetor 2: ", i);
        scanf("%i", &w2[i]);
        i++;
    }
    
    if(array_sub(n1, n2, w1, w2) == 1) printf("Existem posicoes consecutivas\n");
    else printf("Nao existem posicoes consecutivas\n");
    
    return 0;
}