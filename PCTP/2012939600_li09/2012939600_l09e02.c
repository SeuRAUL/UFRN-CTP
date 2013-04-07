#include<stdio.h>
int num_lampadas(int classe, double a, double b){
  int area = a*b, lampadas=0;
  if(classe == 1){
    lampadas += (area*15)/60;
    if((area*15)%60 != 0) lampadas ++;
  }
  else if(classe == 2){
    lampadas += (area*18)/60;
    if((area*18)%60 != 0) lampadas ++;
  }
  else{
    lampadas += (area*20)/60;
    if((area*20)%60 != 0) lampadas ++;
  }
  return lampadas;
}

int main(){
  char aposento[16];
  int classe, total_lampadas=0, potencia, total_potencia;
  double a=0, b=0;
  
  do{
    printf("Nome do aposento: ");
    scanf("%s%*c", aposento);
    /*scanf("%*c");*/
    
    if(aposento[0] == 'f' && aposento[1] == 'i' && aposento[2] == 'm') break;
    
    printf("Informe a classe do aposento: ");
    scanf("%i", &classe);
    printf("Informe as dimenssões: ");
    scanf("%lf %lf", &a, &b);
    
    switch (classe){
      case 1:
	potencia = 15;
	break;
      case 2:
	potencia = 18;
	break;
      case 3:
	potencia = 20;
	break;
    }
    
    total_lampadas += num_lampadas(classe, a, b);
    total_potencia += potencia;
    
    printf("\n%s:\nÁrea: %.1lfm²\nPotencia: %iW/m² = %.1lf\nNo. de Lampadas: %i\n\n", aposento, a*b, potencia, potencia*(a*b), num_lampadas(classe, a, b));
    
  
  }while(aposento[0] != 'f' && aposento[1] != 'i' && aposento[2] != 'm');
  
  printf("\nPotencia total: %i\nTotal de Lampadas: %i\n", total_potencia, total_lampadas);
  
  return 0;
}
