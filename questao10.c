#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

// Fa�a um programa utilizando uma fun��o, que eleve um n�mero inteiro qualquer a uma pot�ncia.
// O n�mero e a pot�ncia devem ser fornecidos pelo usu�rio
// Imprima o resultado

int potencia(int numero, int expoente);

int main() {
	setlocale(LC_ALL, "");
	
	int num, pot;
	
	printf("Digite um n�mero e a pot�ncia: ");
	scanf("%d %d", &num, &pot);
	fflush(stdin);
	
	printf("\n%d ^ %d = %d ", num, pot, potencia(num, pot));
	
	return 0;
}

// Implementa��o da fun��o

int potencia(int numero, int expoente) {
	
	int i, resultado = numero;
	
	for(i = 1; i < expoente; i++){
		
		resultado *= numero;
	}
	
	return resultado;
}
