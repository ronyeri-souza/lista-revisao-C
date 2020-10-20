#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

// crie uma função para exibir a tabuada de multiplicação de um número passado como parâmetro.
// Exemplo, se vier 1, deve imprimir a mutiplicação do 1, de 0 a 9.
// Deve ser feito também o algoritmo principal para chamada da função

// Função que recebe inteiro como parâmetro para fazer a tabuada
void tabuada(int n) {
	int i;
	for(i = 0; i < 10; i++) {
		
		printf("\n%d * %d = %d", i, n, i * n);
	}
}

// Função principal
int main() {
	setlocale(LC_ALL, "");
	
	int num;
	
	printf("Digite um número inteiro: ");
	scanf("%d", &num);
	
	tabuada(num);
	
	return 0;
}

