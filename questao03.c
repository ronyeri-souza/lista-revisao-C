#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
// Estenda o exerc�cio 1 para, a partir do vetor NUMEROS gerar o valor oposto, que corresponde ao vetor numeros ao contr�rio. Exemplo, n�mero 12 se torna 21.
int main() {
	setlocale(LC_ALL, "");
	
	int numeros[10], oposto[10];
	
//	vari�vel de controle, vari�vel que armazena o n�mero invertido, vari�vel que armazena o d�gito do n�mero original e por �ltimo o n�mero original	
	int i, rev, digito, num;
	
//	Preenchendo o vetor de numeros
	for(i = 0; i < 10; i++) {
	
		printf("Digite um n�mero inteiro: ");
		scanf("%d", &numeros[i]);
		fflush(stdin);
	}
	
	printf("\n");
	for(i = 0; i < 10; i++) {
		
		printf("%d ", numeros[i]);
	}
	printf("\n");

// loop para inverter o valor original
	for(i = 0; i < 10; i++) {
		
		rev = 0;
		num = numeros[i];

//	Enquanto n�mero maior que zero, fa�a		
		while(num > 0) {

//	Armazena um d�gito do n�mero original
			digito = num % 10;
			rev = (rev * 10) + digito;
			num /= 10;
		}
		
		oposto[i] = rev;
	}
	
	printf("\n");
	for(i = 0; i < 10; i++) {
		
		printf("%d ", oposto[i]);
	}
	printf("\n");

	return 0;
}

