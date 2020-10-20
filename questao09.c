#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
 
// Programa em C que l� inteiros at� que 0 seja informado.
// Para cada n�mero lido, chama uma fun��o que recebe o n�mero por par�metro e retorna um valor l�gico para indicar se o n�mero � divis�vel por 3 ou n�o
// A frase <n�mero lido> � divis�vel por 3 deve ser exibida, e caso contr�rio <num lido> n�o � divis�vel.

int divisivelPorTres(int n);

int main() {
	setlocale(LC_ALL, "");
	
	int num;
	
	printf("\nDigite um n�mero (0 para sair): ");
	scanf("%d", &num);
	fflush(stdin);
	
	while(num != 0) {
		
//		Verifica se n�mero � divis�vel por 3
		if(divisivelPorTres(num) == 1) {
			
			printf("\n%d � divis�vel por 3!", num);
		
			}else{
			printf("\n%d n�o � divis�vel por 3!", num);
			
			}
			
			printf("\nDigite um n�mero (0 para sair):");
			scanf("%d", &num);
			fflush(stdin);
		}
	
	
	return 0;
}

// Implementa��od a fun��o
int divisivelPorTres(int n) {
//	Verifica se n � divis�vel por 3
	if(n % 3 == 0) {
		
		return 1;	
	}
	
	return 0;
	
}
