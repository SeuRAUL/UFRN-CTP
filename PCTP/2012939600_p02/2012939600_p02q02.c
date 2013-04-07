#include<stdio.h>
int main(){
	int n, i, j; /* Variaveis de tamanho e contador */
	
	printf("Tamanho da matriz quadrada: "); /* Pede o tamanho da matriz */
	scanf("%i", &n);
	
	int A[n][n];     /* Declara a matriz */
	
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("Valor da posição [%i][%i]: ", i, j);   /* For que Preenche a Matriz */
			scanf("%i", &A[i][j]);
		}
	}
	
	int numero_magico = 0; /* Numero que deve ser igual em cada coluna, linha e diagonal para comprovar o quadrado mágico */
	
	for(i=0;i<n;i++){
		numero_magico += A[0][i];     /* numero_magico recebe a soma da primeira linha */
	}
	
	int teste = 0;           /* Declara a variável teste, que será comparada com o numero_magico para verificação */
	
	
	/* TESTES DE COLUNAS */
	for(j=1;j<n;j++){
		for(i=0;i<n;i++){
			teste += A[j][i];          /* teste recebe o valor da coluna subsequente */
		}
		if(numero_magico != teste){  /* Se o teste for diferente do numero_magico, a variavel vira -1 e o código é encerrado, senão teste volta pra 0 e pula pra proxima linha */
			numero_magico = -1;
			break;
		}
		else
			teste = 0;
		
		/*if(numero_magico == -1) break;*/
	}
	
	/* TESTES DE LINHA */
	if(numero_magico != -1){     /* numero_magico sendo -1 já sabe que não é cubo magico */
		for(j=0;j<n;j++){
			for(i=0;i<n;i++){
				teste += A[i][j];          /* teste recebe o valor da linha subsequente */
			}
			if(numero_magico != teste){  /* Se o teste for diferente do numero_magico, a variavel vira -1 e o código é encerrado, senão teste volta pra 0 e pula pra proxima linha */
				numero_magico = -1;
				break;
			}
			else
				teste = 0;
				
		/*if(numero_magico == -1) break;*/
		}
	}


	/* TESTE DE DIAGONAL PRINCIPAL */
	if(numero_magico != -1){     /* numero_magico sendo -1 já sabe que não é cubo magico */
		for(j=0;j<n;j++){
			for(i=0;i<n;i++){
				if(i == j){          /* Diagonal principal */
					teste += A[i][j];
				}
			}
		}
		if(numero_magico != teste){  /* Se o teste for diferente do numero_magico, a variavel vira -1 e o código é encerrado, senão teste volta pra 0 e pula pra proxima linha */
			numero_magico = -1;
			
		}
		else
			teste = 0;
	}
	
	/* TESTE DE DIAGONAL SECUNDARIA */
	if(numero_magico != -1){     /* numero_magico sendo -1 já sabe que não é cubo magico */
		for(j=0;j<n;j++){
			for(i=0;i<n;i++){
				if((i+1)+(j+1) == n+1){      /* Diagonal secundaria */
					teste += A[i][j];
				}
			}
		}
		if(numero_magico != teste){  /* Se o teste for diferente do numero_magico, a variavel vira -1 e o código é encerrado, senão teste volta pra 0 e pula pra proxima linha */
			numero_magico = -1;
		}
		else
			teste = 0;

	}
	
	
	if(numero_magico == -1)
		printf("NÃO é um cubo mágico!\n");
	else
		printf("É um cubo magico!\n");
	

	return 0;
}
