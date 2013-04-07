/* 
 * File:   2012939600_l11e04.c
 * Author: seuraul
 *
 * Created on 10 de Junho de 2012, 16:49
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
typedef struct Tproduto {
    int codigo;
    char desc[51];
    double valor;        
}Tproduto;

Tproduto cadastro(){
  Tproduto p;
  
  printf("Código: ");
  scanf("%i", &p.codigo);
  printf("Descrição: ");
  scanf(" %[^\n]", p.desc);
  printf("Valor: R$");
  scanf("%lf", &p.valor);
  return p;
}

void imprime(Tproduto p){
  printf("Cód.: %i\n", p.codigo);
  printf("Des.: %s\n", p.desc);
  printf("R$.:  %.02lf\n", p.valor);
  printf("---\n");
}

int main(int argc, char** argv) {
    
    Tproduto p1, p2, p3, p_aux;
    
    printf("produto 1\n");
    p1 = cadastro();
    printf("produto 2\n");
    p2 = cadastro();
    printf("produto 3\n");
    p3 = cadastro();
    
    int i;
    for(i=0;i<2;i++){
      if(p1.desc[0] > p2.desc[0]){
	p_aux = p1;
	p1 = p2;
	p2 = p_aux;
      }
      if(p2.desc[0] > p3.desc[0]){
	p_aux = p2;
	p2 = p3;
	p3 = p_aux;
      }
    }
    
    imprime(p1);
    imprime(p2);
    imprime(p3);

    return (EXIT_SUCCESS);
}

