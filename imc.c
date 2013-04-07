#include<stdio.h>
int imc(int peso, double altura){
  altura = altura / 100; /* Transforma a altura em cm pra metros */
  return peso / (altura*altura);
}

void classificacao(int imc){
  if(imc < 18)
    printf("Magreza\n");
  else if(imc >= 18 && imc < 25)
    printf("Saudavel\n");
  else if(imc >= 25 && imc < 30)
    printf("Peso em excesso\n");
  else if(imc >= 30 && imc < 35)
    printf("Obesidade 1\n");
  else if(imc >= 35 && imc < 40)
    printf("Obesidade 2\n");
  else if(imc >= 40)
    printf("Obesidade 3\n");


}

int main(){
  
  int peso, altura;
  
  printf("Informe o peso [kg]: ");
  scanf("%i", &peso);
  printf("Informe a altura [cm]: ");
  scanf("%i", &altura);
  
  printf("O IMC é: %i\n", imc(peso, altura));
  printf("Classificacao: ");
  classificacao(imc(peso, altura));

  
  return 0;
}