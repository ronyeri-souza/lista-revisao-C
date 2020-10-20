#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <string.h>
// 	Faça um programa em C que leia nome, idade e sexo de 20 pessoas e:
// A) Imprima o nome delas
// B) Calcule e imprima o nome do homem mais velho
// C) Calcule e imprima a média de idade das mulheres

// Constante para determinar o tamanho
#define TAM 20
int main() {
	setlocale(LC_ALL, "");
	
	char nomes[TAM][10];
	int idades[TAM];
	char sexo[TAM];
	char nomeHomemMaisVelho[10];
	float mediaIdadeMulheres;
	int i, idadeHomemMaisVelho = 0, quantidadeMulheres = 0;
	
//	Loop para armazenar informações
	for(i = 0; i < TAM;  i++) { 
		
		printf("Digite o nome: ");
		fgets(nomes[i], 10, stdin);
		printf("Digite a idade: ");
		scanf("%d", &idades[i]);
		fflush(stdin);
		
		printf("Digite o sexo (M ou F): ");
		scanf("%c", &sexo[i]);
		fflush(stdin);
		
//		Verifica a idade do homem mais velho
		if((sexo[i] == 'M' || sexo[i] == 'm') && idadeHomemMaisVelho < idades[i]) {
				
			idadeHomemMaisVelho = idades[i];
			
//			Copia o nome do homem mais velho para a variável nomeHomemMaisVelho
			strcpy(nomeHomemMaisVelho, nomes[i]);
		}
		
//		Soma idade das mulheres para cálculo da média de idade

		if(sexo[i] == 'F' || sexo[i] == 'f') {
			
			mediaIdadeMulheres += idades[i];
			quantidadeMulheres++;
		}
	}
	
//	Imprime o nome das pessoas
	for(i = 0; i < TAM; i++) {
		
		printf("\nNome: %s", nomes[i]);
	}
	
//	Imprime o nome do hoem mais velho
	printf("\nNome do homem mais velho: %s", nomeHomemMaisVelho);
	
//	Cálculo da média de idade das mulheres
	mediaIdadeMulheres /= quantidadeMulheres; 
	printf("\nMédia de idade das mulheres: %.1f ", mediaIdadeMulheres);
	
	return 0;
}

