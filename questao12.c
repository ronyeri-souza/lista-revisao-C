#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <locale.h>

// Sistema escolar com um menu de opções:
// A) Opção 1: ler 2 notas e nomes de 5 alunos e armazenar em vetor
// B) Opção 2: Exibir média geral de todos os alunos
// C) Opção 3: Exibir uma lista com nome e notas de todos os alunos
// D) Exibir lista com nome e média dos alunos, com opção de aprovado caso média  >= 7, e caso contrário, imprimir reprovado.


// função menu

void menu() {
	system("cls");
	printf("\n***** MENU DE OPÇÕES *****\n");
	printf("Opção 01: Ler notas e nomes.");
	printf("\nOpção 02: Exibir média geral de todos os alunos.");
	printf("\nOpção 03: Exibir lista com notas e nomes dos alunos.");
	printf("\nOpção 04: Exibir médias e status de aprovação dos alunos.");
	printf("\nOpção 0: Sair do programa.\n");
	printf("\nSelecione uma opção: ");
}

int main() {
	setlocale(LC_ALL, "");
	
	char nomes[5][10];
	float notas[5][2];
	int i, opcao;
	float media = 0.0;
	
	menu();
	scanf("%d", &opcao);
	fflush(stdin);
	
	while(opcao !=0) {
		
		switch(opcao){
			
			case 1:
				
				for(i = 0; i < 5; i++) {
					
					printf("Digite o nome: ");
					fgets(nomes[i], 10, stdin);
					printf("\nDigite as duas notas: ");
					scanf("%f %f", &notas[i][0], &notas[i][1]);
					fflush(stdin);
				}
				
				printf("Digite qualquer tecla para continuar...");
				getchar();
				break;
				
			case 2:
				
				for(i = 0; i < 5; i++) {
					
					media += notas[i][0] + notas[i][1];
					
				}
				
				media /= (5 * 2);
				printf("Média Geral: %.1f", media);
				
				printf("\n\nDigite qualquer tecla para continuar...");
				getchar();
				break;
				
			case 3:
			
				for(i = 0; i < 5; i++) { 
					printf("\nNome: %s", nomes[i]);
					printf("\nNotas: %.1f %.1f", notas[i][0], notas[i][1]);
				}	
				
				printf("\n\nDigite qualquer tecla para continuar...");
				getchar();
				break;
			
			case 4:
				
				for(i = 0; i < 5; i++) {
					
					printf("\nNome: %s", nomes[i]);
					media = (notas[i][0] + notas[i][1]) / 2;
					printf("\nMédia %.1f", media);
					
						if( media >= 7.0) {
							printf("\nSituação: Aprovado!");
					
						} else {
							printf("\nSituação: Reprovado!");
						}
					}
					
					printf("\n\nDigite qualquer tecla para continuar... ");
					getchar();
					break;
				
			default:
				
				printf("\nOpção inválida!");
				printf("\n\nDigite qualquer tecla para continuar... ");
				getchar();
		}
		
		menu();
		scanf("%d", &opcao);
		fflush(stdin);
	}
	return 0;
}


