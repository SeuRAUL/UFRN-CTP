/* Seu_RAUL
 * PCTP -> Lista09.Questao11*/

#include<stdio.h>
int somabit(int b1, int b2, int *vaium){
  if(b1 == 0){
    if(b2 == 0){
      if(*vaium == 0)
	return 0;
      else{
	*vaium = 0;
	return 1;
      }
    }
    else{ /* b2 = 1 : b1 = 0 */
      if(*vaium == 0)
	return 1;
      else{
	*vaium = 1;
	return 1;
      }
    }
  }
  else{ /* b1 = 1 */
    if(b2 == 0){
      if(*vaium == 0)
	return 1;
      else{
	*vaium = 1;
	return 0;
      }
    }
    else{ /* b1 = 1 : b2 = 1 */
      if(*vaium == 0){
	*vaium = 1;
	return 0;
      }
      else{ /* b1 = 1 : b2 = 1 : v = 1 */
	return 1;
      }
    }
  }
}

int quebrabit(int *b){
  int ret = *b%10;
  *b = *b/10;
  return ret;
}

/* Programa que recebe dois números na base binária e calcula um número na base binária que é a soma dos dois números dados. */
int main(){
  int b1, b2, vaium=0, soma=0, dec=1;
  
  printf("1º numero binario: ");
  scanf("%i", &b1);
  printf("2º numero binario: ");
  scanf("%i", &b2);
  
  while(b1 > 0 || b2 > 0){
    soma += somabit(quebrabit(&b1), quebrabit(&b2), &vaium)*dec;
    dec = dec*10;
  }
  if(dec > soma)
    soma += dec;
  
  printf("Soma = %i\n", soma);

  return 0;
}