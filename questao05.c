#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

// Crie um programa que armazene nome, duas notas de 5 alunos e ipria uma listagem contendo nome, as notas e m�dia de cada aluno.

int main() {
	setlocale(LC_ALL, "");
	
	char nomes[5][10];
	float notas [5][2];
	int i;

//	loop para armazenar os dados do aluno,que s�o nome e notas 
	for(i = 0; i < 5; i++) {
		
		printf("Digite o nome do aluno: ");
		fgets(nomes[i], 10, stdin);
		printf("Digite as duas notas: ");
		scanf("%f %f", &notas[i][0], &notas [i][1]);
		fflush(stdin);
	}
	
//	Loop para imprimir o nome, as notas e a m�dia
	for(i = 0; i < 5; i++) {
		
		printf("\nNome: %s", nomes[i]);
		printf("\nNotas: %.1f %.1f", notas[i][0], notas[i][1]);
		printf("\nM�dia: %.1f\n", (notas[i][0] + notas[i][1]) / 2);
	}
	return 0;
}

