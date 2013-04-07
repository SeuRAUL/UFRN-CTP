/* Seu_RAUL
 * PCTP -> Lista09.Questao08*/

#include<stdio.h>
void cedulas(double val, int *um, int *cin, int *dez, int *vin){
  while(val >= 20){
    *vin += 1;
    val -=20;
  }
  while(val >= 10){
    *dez += 1;
    val -=10;
  }
  while(val >= 5){
    *cin += 1;
    val -=5;
  }
  while(val >= 1){
    *um += 1;
    val -=1;
  }
}
/* Programa que dado um número não-negativo de ponto flutuante que representa um valor na moeda corrente determina a menor quantidade de cédulas para pagar esse valor. */
int main(){
  double val;
  int um=0, cin=0, dez=0, vin=0;
  
  printf("Informe o valor a ser pago: ");
  scanf("%lf", &val);
  
  cedulas(val, &um, &cin, &dez, &vin);
  
  printf("R$20 = %i notas\nR$10 = %i notas\nR$5  = %i notas\nR$1  = %i notas\n", vin, dez, cin, um);
  
  return 0;
}