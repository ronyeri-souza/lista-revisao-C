#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

// Um nadador dos 800 metros estilo peito est� se preparando para uma competi��o e deseja fazer uma an�lise dos seus resultados.
// Para isso, em seus treinos, ele anotou 20 tomadas de tempo a cada vez que completava os 800 metros.
// Fa�a um programa que armazene em um vetor essas 20 tomadas de tempo, calcule e imprima:
// A) M�dia de tempo que ele percorreu os 800m
// B) O pior (maior) e melhor tempo(menor) em que ele percorreu os 800m


int main() {
	setlocale(LC_ALL, "");
	
	float tomadas[20];
	float pior = 0.0, melhor = 9999.9, media = 0.0;
	int i;
	
//	Loop que armazena as 20 tomadas de tempo
	for(i = 0; i < 20; i++) {
	
		printf("Digite o tempo da tomada #%d: ", i);
		scanf("%f", tomadas[i]);
		fflush(stdin);
		
//		Verifica o menor tempo (melhor)
		if(tomadas[i] < melhor) {
		
			melhor = tomadas[i];	
		}
		
//		Verifica o aior tempo (pior)
		if(tomadas[i] > pior) {
		
			pior = tomadas[i];
		}
	}	
	
//	Loop para realizar soma das tomadas e armazenar em m�dia
	for(i = 0; i < 20; i++) {
		
		media += tomadas[i];
	}
	
//	C�lculo da m�dia das 20 tomadas
	media /= 20;
	
//	Impress�o dos resultados
	printf("\nM�dia de tempo: %.1f", media);
	printf("\nPior tempo: %.1f", pior);
	printf("\nMelhor tempo: %.1f\n", melhor);
	
	return 0;
}

