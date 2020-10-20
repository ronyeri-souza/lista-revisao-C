#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

// crie uma fun��o para exibir a tabuada de multiplica��o de um n�mero passado como par�metro.
// Exemplo, se vier 1, deve imprimir a mutiplica��o do 1, de 0 a 9.
// Deve ser feito tamb�m o algoritmo principal para chamada da fun��o

// Fun��o que recebe inteiro como par�metro para fazer a tabuada
void tabuada(int n) {
	int i;
	for(i = 0; i < 10; i++) {
		
		printf("\n%d * %d = %d", i, n, i * n);
	}
}

// Fun��o principal
int main() {
	setlocale(LC_ALL, "");
	
	int num;
	
	printf("Digite um n�mero inteiro: ");
	scanf("%d", &num);
	
	tabuada(num);
	
	return 0;
}

