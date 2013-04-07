#include<stdio.h>
int main(){
	int n, i; /* Variaveis de tamanho e contador */
	
	printf("Tamanho dos vetores: "); /* Pede o tamanho dos vetores */
	scanf("%i", &n);
	
	int x[n], y[n]; /* Declara os vetores x e y */
	
	for(i=0; i<n; i++){              /* For que preenche o vetor x */
		printf("Valor %i de x: ", i);
		scanf("%i", &x[i]);
	}
	for(i=0; i<n; i++){              /* For que preenche o vetor y */
		printf("Valor %i de y: ", i);
		scanf("%i", &y[i]);
	}
	
	int valor_escalar=0;               /* declara a variavel que conterah o resultaro */
	
	for(i=0; i<n; i++){
		valor_escalar += x[i]*y[i];      /* For que preenche o resultado, multiplicando as posicoes dos vetores e somando */
	}
	
	printf("O valor escalar de x e y é: %i\n", valor_escalar);              /* Exibe o resultado */

	return 0;
}
