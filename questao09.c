#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
 
// Programa em C que lê inteiros até que 0 seja informado.
// Para cada número lido, chama uma função que recebe o número por parâmetro e retorna um valor lógico para indicar se o número é divisível por 3 ou não
// A frase <número lido> é divisível por 3 deve ser exibida, e caso contrário <num lido> não é divisível.

int divisivelPorTres(int n);

int main() {
	setlocale(LC_ALL, "");
	
	int num;
	
	printf("\nDigite um número (0 para sair): ");
	scanf("%d", &num);
	fflush(stdin);
	
	while(num != 0) {
		
//		Verifica se número é divisível por 3
		if(divisivelPorTres(num) == 1) {
			
			printf("\n%d é divisível por 3!", num);
		
			}else{
			printf("\n%d não é divisível por 3!", num);
			
			}
			
			printf("\nDigite um número (0 para sair):");
			scanf("%d", &num);
			fflush(stdin);
		}
	
	
	return 0;
}

// Implementaçãod a função
int divisivelPorTres(int n) {
//	Verifica se n é divisível por 3
	if(n % 3 == 0) {
		
		return 1;	
	}
	
	return 0;
	
}
