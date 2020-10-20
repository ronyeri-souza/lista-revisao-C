#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

// Leia um vetor de LETRAS de 20 letras e, depois escreva a quantidade de vogais que existem dentro do vetor e o percentual de consoantes.

int main() {
	setlocale(LC_ALL, "");
	
	char letras[20];
	int i, quantidadeVogais = 0;
	float percentConsoantes;
	
//	Preenchendo o vetor de letras
	for(i = 0; i < 20; i++) {
		
		printf("Digite uma letra: ");
		scanf("%c", &letras[i]);
		fflush(stdin);
	}
	
//	Contabilizando as vogais
	for(i = 0; i < 20; i++) {
	
//	Verifica se há letras que são vogais
		if(letras[i] == 'a' || letras[i] == 'e' || letras[i] == 'i' || letras[i] == 'o' || letras[i] == 'u' 
		|| letras[i] == 'A' || letras[i] == 'E' || letras[i] == 'I' || letras[i] == 'O' || letras[i] == 'U') {
		
			quantidadeVogais++;
		}
	}
	
//	Imprime quantidade de vogais
	printf("\nQuantidade de vogais %d", quantidadeVogais);
	
//	Calcula percentual de consoantes
	percentConsoantes = ((20 - quantidadeVogais * 1.0) / 20) * 100;
	printf("\nPercentual de Consoantes %.1f%", percentConsoantes);
	return 0;
}

