#include<stdio.h>
int main(){
  int CH, NF, F, P1, P2, P3, P4, MP, MF;
  
  printf("Defina a Carga horária da materia: ");
  scanf("%d", &CH);
  printf("Defina o numero de faltas: ");
  scanf("%d", &NF);
  
  F = (100 * NF) / CH;
  
  if (F <= 25){
    printf("Informe a nota da 1a prova: ");
    scanf("%d", &P1);
    printf("Informe a nota da 2a prova: ");
    scanf("%d", &P2);
    printf("Informe a nota da 3a prova: ");
    scanf("%d", &P3);
    MP = (4*P1 + 5*P2 + 6*P3) / 15;
    
    if (MP >= 30 && MP < 70){
      printf("Informe a nota da 4a prova: ");
      scanf("%d", &P4);
      MF = (MP + P4) / 2;
    }else
      MF = MP;
  }
  
  if (F > 25)
    printf("RF\n");
  else if (F < 25 && MF < 50)
    printf("RN\n");
  else /*(F < 25 && MF > 50)*/
    printf("AP\n");
  
  return 0;
}