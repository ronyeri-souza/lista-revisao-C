#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

#define LINHA 50
#define COLUNA 100
// Faça um programa que lê um número itneiro e uma matriz 50 x 100 de inteiros.
// Exibe a soma dos elementos da matriz maiores que o número lido

int main() {
	setlocale(LC_ALL, "");
	
	int matriz[LINHA][COLUNA];
	int num, i, j, somaNumerosMaiores;
	
	printf("Digite um número inteiro: ");
	scanf("%d", &num);
	fflush(stdin);
	
//	Loop para preencher a matriz de inteiros

	for(i = 0; i < LINHA; i++) {
		
		for(j = 0; j < COLUNA; j++) {
			
			printf("Digite um número inteiro para a matriz[%d][%d] ", i, j);
			scanf("%d", &matriz[i][j]);
			fflush(stdin);
			
//			Verifica se o número lido é maior que o primeiro número digitado
			
			if(matriz[i][j] >  num) {
			
				somaNumerosMaiores += matriz[i][j];
				
			}
		}
	}
	
//	Loop para exibir a matriz digitada
	for(i = 0; i < LINHA; i++) {
		
		for(j = 0; j < COLUNA; j++) {
			
			printf("%d\t", matriz[i][j]);
				
			}
			printf("\n");
		}
		
//		Imprime a soma dos números maiores que o número digitado
		printf("Soma dos números maiores que %d = %d", num, somaNumerosMaiores);
	return 0;
}


