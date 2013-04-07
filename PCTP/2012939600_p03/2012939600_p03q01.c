#include<stdio.h>

/* quebra o umtimo digito de n e compara com d, sendo igual, incrementa o cont e retorna ele */
int conta_digitos(int n, int d){
  int cont=0;
  while(n>9){
    if(n%10 == d)
      cont++;
    n = n/10;
  }
  if(n%10 == d)
    cont++;
  
  return cont;
}

/* recebe n1 e n2, compara de 1 a 9 quantos digitos desses cada um tem, e se as quantidades forem iguais imforma que os mesmos são permutações */
int main(){
  int n1, n2, i;
  
  printf("n1: ");
  scanf("%i", &n1);
  printf("n2: ");
  scanf("%i", &n2);
  
  int teste=1;
  for(i=1;i<10;i++){
    if(conta_digitos(n1,i) != conta_digitos(n2,i)){
      teste = 0;
      break;
    }
  }
  
  if(teste==1)
    printf("São permutações!\n");
  else
    printf("NÃO são permutações!\n");
  
  return 0;
}