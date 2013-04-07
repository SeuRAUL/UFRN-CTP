#include<stdio.h>
int main () {
  int p=1, alunos, nota, maiornota=0, menornota=999;
  
  printf("quant. alunos: ");
  scanf("%i", &alunos);
  
  while(p <= alunos) {
    printf("nota do aluno %i: ", p);
    scanf("%i", &nota);
    if(nota > maiornota)
      maiornota = nota;
    if(nota < menornota)
      menornota = nota;
    p++;
  }
  
  printf("Maior nota:  %i\nMenor nota: %i\n", maiornota, menornota);
  
  return 0;
}