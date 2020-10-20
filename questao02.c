#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
// Estenda o exercício 1 para, a partir do vetor NUMEROS completamente preenchido, escrever os vetores vp e vi, que serão números pares e ímpares respectivamente
int main() {
	setlocale(LC_ALL, "");
	
	int numeros[10], valoresPares[10], valoresImpares[10];
	int i;
	
//	Variáveis de controle para valoresImpares e valoresPares
	int j = 0, k = 0;
	
//	Preenchendo o vetor de numeros
	for(i = 0; i < 10; i++) {
	
		printf("Digite um número inteiro: ");
		scanf("%d", &numeros[i]);
		fflush(stdin);
	}
	
	for(i = 0; i < 10; i++) {
		
//		Verifica se o número é par ou ímpar
		if(numeros[i] % 2 == 0) {
			
			valoresPares[j] = numeros [i];
			j++;
			
		} else{
			
				valoresImpares[k] = numeros[i];
				k++;
			}
		}

	
//	loops para impressão dos vetores

	printf("\nNúmeros pares: \n");
	for(i = 0; i < j; i++) {
			
		printf("%d ", valoresPares[i]);		
	}
	
	printf("\n");
	printf("\nNúmeros Ímpares: \n");
	
	for(i = 0; i < k; i++){
		
		printf(" %d ", valoresImpares[i]);
	}
	
	return 0;
}
	
