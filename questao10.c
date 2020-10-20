#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

// Faça um programa utilizando uma função, que eleve um número inteiro qualquer a uma potência.
// O número e a potência devem ser fornecidos pelo usuário
// Imprima o resultado

int potencia(int numero, int expoente);

int main() {
	setlocale(LC_ALL, "");
	
	int num, pot;
	
	printf("Digite um número e a potência: ");
	scanf("%d %d", &num, &pot);
	fflush(stdin);
	
	printf("\n%d ^ %d = %d ", num, pot, potencia(num, pot));
	
	return 0;
}

// Implementação da função

int potencia(int numero, int expoente) {
	
	int i, resultado = numero;
	
	for(i = 1; i < expoente; i++){
		
		resultado *= numero;
	}
	
	return resultado;
}
