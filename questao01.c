// Leia um vetor chamado NUMEROS de 10 n�meros inteiros e exiba qual o maior e o menor n�mero desse vetor

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "");
	
	int numeros[10];
	int maior = -99999, menor = 99999;
	int i;
	
//	Preenchendo o vetor de numeros
	for(i = 0; i < 10; i++) {
	
		printf("Digite um n�mero inteiro: ");
		scanf("%d", &numeros[i]);
		fflush(stdin);
	}
	
	for(i = 0; i < 10; i++) {
		
//		Verifica o maior n�mero
		if(numeros[i] > maior) {
			
			maior = numeros [i];
		}
		
//		Verifica o menor n�mero
		if(numeros[i] < menor) {
			
			menor = numeros[i];
		}
	}
	
	printf("\nMaior n�mero = %d", maior);
	printf("\nMenor n�mero = %d", menor);
	
	return 0;
}

