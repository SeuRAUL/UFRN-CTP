#include<stdio.h>

typedef struct tempo{
  int hh;
  int mm;
  int ss;
  
}tempo;

/* recebe dois parametros de tipo tempo e retorna uma estrutura de tempo contendo a diferença entre os horários dos parametros */
tempo tempo_decorrido(tempo t1, tempo t2){
  int st1 = (t1.hh*3600) + (t1.mm*60) + t1.ss;
  int st2 = (t2.hh*3600) + (t2.mm*60) + t2.ss;
  
  tempo resultado;
  resultado.hh = 0;
  resultado.mm = 0;
  resultado.ss = 0;
  
  if(st2 > st1){  /* 2ª hora maior, diminue as duas e retorna o horário */
    st2 = st2 - st1;
    while(st2 >= 3600){
      resultado.hh++;
      st2 -= 3600;
    }
    while(st2 >= 60){
      resultado.mm++;
      st2 -= 60;
    }
    resultado.ss = st2; 
  }
  else{ /* 2ª hora menor, faz a diferença da meia noite */
    int dia = 24*3600; /* meia noite */
    
    dia = dia - st1;
    
    st2 = st2 + dia;
    while(st2 >= 3600){
      resultado.hh++;
      st2 -= 3600;
    }
    while(st2 >= 60){
      resultado.mm++;
      st2 -= 60;
    }
    resultado.ss = st2;
  }
  
  return resultado;
}

/* recebe duas horarios para verificar a diferença */
int main(){
  tempo t1, t2, prt;
  
  printf("Informe a hora 1 (hh:mm:ss): ");
  scanf("%i:%i:%i", &t1.hh, &t1.mm, &t1.ss);
  printf("Informe a hora 1 (hh:mm:ss): ");
  scanf("%i:%i:%i", &t2.hh, &t2.mm, &t2.ss);
  
  prt = tempo_decorrido(t1, t2); /* recebe da função a diferença de horário */
  
  printf("Diferença de %i:%i:%i\n", prt.hh, prt.mm, prt.ss);
  
  return 0;
}