#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <locale.h>

// Sistema escolar com um menu de op��es:
// A) Op��o 1: ler 2 notas e nomes de 5 alunos e armazenar em vetor
// B) Op��o 2: Exibir m�dia geral de todos os alunos
// C) Op��o 3: Exibir uma lista com nome e notas de todos os alunos
// D) Exibir lista com nome e m�dia dos alunos, com op��o de aprovado caso m�dia  >= 7, e caso contr�rio, imprimir reprovado.


// fun��o menu

void menu() {
	system("cls");
	printf("\n***** MENU DE OP��ES *****\n");
	printf("Op��o 01: Ler notas e nomes.");
	printf("\nOp��o 02: Exibir m�dia geral de todos os alunos.");
	printf("\nOp��o 03: Exibir lista com notas e nomes dos alunos.");
	printf("\nOp��o 04: Exibir m�dias e status de aprova��o dos alunos.");
	printf("\nOp��o 0: Sair do programa.\n");
	printf("\nSelecione uma op��o: ");
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
				printf("M�dia Geral: %.1f", media);
				
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
					printf("\nM�dia %.1f", media);
					
						if( media >= 7.0) {
							printf("\nSitua��o: Aprovado!");
					
						} else {
							printf("\nSitua��o: Reprovado!");
						}
					}
					
					printf("\n\nDigite qualquer tecla para continuar... ");
					getchar();
					break;
				
			default:
				
				printf("\nOp��o inv�lida!");
				printf("\n\nDigite qualquer tecla para continuar... ");
				getchar();
		}
		
		menu();
		scanf("%d", &opcao);
		fflush(stdin);
	}
	return 0;
}


