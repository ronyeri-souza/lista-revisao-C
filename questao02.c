#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
// Estenda o exerc�cio 1 para, a partir do vetor NUMEROS completamente preenchido, escrever os vetores vp e vi, que ser�o n�meros pares e �mpares respectivamente
int main() {
	setlocale(LC_ALL, "");
	
	int numeros[10], valoresPares[10], valoresImpares[10];
	int i;
	
//	Vari�veis de controle para valoresImpares e valoresPares
	int j = 0, k = 0;
	
//	Preenchendo o vetor de numeros
	for(i = 0; i < 10; i++) {
	
		printf("Digite um n�mero inteiro: ");
		scanf("%d", &numeros[i]);
		fflush(stdin);
	}
	
	for(i = 0; i < 10; i++) {
		
//		Verifica se o n�mero � par ou �mpar
		if(numeros[i] % 2 == 0) {
			
			valoresPares[j] = numeros [i];
			j++;
			
		} else{
			
				valoresImpares[k] = numeros[i];
				k++;
			}
		}

	
//	loops para impress�o dos vetores

	printf("\nN�meros pares: \n");
	for(i = 0; i < j; i++) {
			
		printf("%d ", valoresPares[i]);		
	}
	
	printf("\n");
	printf("\nN�meros �mpares: \n");
	
	for(i = 0; i < k; i++){
		
		printf(" %d ", valoresImpares[i]);
	}
	
	return 0;
}
	
