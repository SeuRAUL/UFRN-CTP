/* Seu_RAUL
 * PCTP -> Lista09.Questao06*/

#include<stdio.h>
int sufixo(int a, int b){
  int teste = 1;
  do{
    if(a%10 != b%10){
      teste = 0;
      break;
    }
    a = a/10;
    b = b/10;
  }while(b>0);
  
  return teste;
}
/* Programa que lê dois números inteiros 'a' e 'b' e verifica se o menor deles é subseqüência do outro. */
int main(){
  int a, b, teste = 1;
  
  printf("Informe a: ");
  scanf("%i", &a);
  printf("Informe b: ");
  scanf("%i", &b);
  
   if(a==b)
     printf("'a' e 'b' são iguai.\n");
   else if(a>b){
     while(a>=b){
       if(sufixo(a,b) == 1){
 	printf("'b' é subssequencia em 'a'\n");
	teste = 0;
 	break;
       }
       else
 	a = a/10;
     }
   }
   else if(b>a){
     while(b>=a){
       if(sufixo(b,a) == 1){
 	printf("'a' é subssequencia em 'b'\n");
	teste = 0;
 	break;
       }
       else
 	b = b/10;
     }
   }
   if(teste == 1)
     printf("Um não é subssequencia do outro\n");
  
  
  
  
  return 0;
}