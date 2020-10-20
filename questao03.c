#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
// Estenda o exercício 1 para, a partir do vetor NUMEROS gerar o valor oposto, que corresponde ao vetor numeros ao contrário. Exemplo, número 12 se torna 21.
int main() {
	setlocale(LC_ALL, "");
	
	int numeros[10], oposto[10];
	
//	variável de controle, variável que armazena o número invertido, variável que armazena o dígito do número original e por último o número original	
	int i, rev, digito, num;
	
//	Preenchendo o vetor de numeros
	for(i = 0; i < 10; i++) {
	
		printf("Digite um número inteiro: ");
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

//	Enquanto número maior que zero, faça		
		while(num > 0) {

//	Armazena um dígito do número original
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

