/* Seu_RAUL
 * PCTP -> Lista09.Questao07*/

#include <stdio.h>
#include <stdlib.h>
int bloco(int m){
  int i, num, par, res=0;
  
  printf("Insira um numero:\n");
  scanf("%i", &num);
  
  par = num%2;
  
  for(i=1;i<m;i++){
    printf("Insira um numero:\n");
    scanf("%i", &num);
    
    if(num%2 != par)
      res = -1;
  }
  if(res == 0)
      return par;
  else
      return -1;
  
}

int testa_tamanho(int n) {
    int soma=0, i;
    
    for(i=0;soma<n;i++)
        soma += i;
    
    if(soma == n)
        return i-1;
    else
        return 0;
}

int main() {
    int n, i, /*soma = 0,*/ numSub;
    
    printf("Informe a quantidade de elementos: ");
    scanf("%i", &n);
    
    numSub = testa_tamanho(n);
    if (numSub) {
        for(i=1;i<=numSub;i++){
            if (bloco(i) == -1) {
                printf("Sequencia não m-alternante!\n");
                return (EXIT_SUCCESS);
            }
        }
        
        printf("Sua sequencia eh %i-alternante!\n", numSub);
    }
    else
        printf("Sua sequencia nao eh m-alternante!\n");
    
    return 0;
}

