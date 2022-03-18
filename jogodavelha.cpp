#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ( ){
	int i, j, linha, coluna, contador;
	char matriz[3][3];
	
	setlocale(LC_ALL,""); 
	
	for(i = 0; i < 3; i++){
		putchar('\n');
		for(j = 0; j < 3; j++){
			putchar('\t');
			matriz[i][j] = '.';
			printf("%c", matriz[i][j]);
		}
		putchar('\n');
		putchar('\n');
	}
	
	for (contador = 0; contador < 9; contador++){
		
		
		
		printf("\nInsira a linha em que devera ser posto seu simbolo:\n");
		scanf("%d", &linha);
		fflush(stdout);
		linha--;
		
		printf("Insira a coluna em que devera ser posto seu simbolo:\n");
		scanf("%d", &coluna);
		fflush(stdout);
		coluna--;
		
		putchar('\n');
		if(matriz[linha][coluna] == '.'){
		
			if(contador%2){
				matriz[linha][coluna] = 'O';
			} 
			else{
				matriz[linha][coluna] = 'X';
			}
			for(i = 0; i < 3; i++){
				putchar('\n');
				for(j = 0; j < 3; j++){
					putchar('\t');
					printf("%c", matriz[i][j]);
				}
				putchar('\n');
				putchar('\n');
			}
			if((matriz[0][0] == matriz[0][1] && matriz[0][0] == matriz[0][2] && matriz[0][0] != '.')||
			   (matriz[0][0] == matriz[1][1] && matriz[0][0] == matriz[2][2] && matriz[0][0] != '.')||
			   (matriz[0][0] == matriz[1][0] && matriz[0][0] == matriz[2][0] && matriz[0][0] != '.')||
			   (matriz[0][1] == matriz[1][1] && matriz[0][1] == matriz[2][1] && matriz[0][1] != '.')||
			   (matriz[0][2] == matriz[1][2] && matriz[0][2] == matriz[2][2] && matriz[0][2] != '.')||
			   (matriz[1][0] == matriz[1][1] && matriz[1][0] == matriz[1][2] && matriz[1][0] != '.')||
			   (matriz[2][0] == matriz[2][1] && matriz[2][0] == matriz[2][2] && matriz[2][0] != '.')||
			   (matriz[2][0] == matriz[1][1] && matriz[2][0] == matriz[0][2] && matriz[2][0] != '.')){
					
				printf("\nJogador %d ganhou!", (contador%2) + 1);	
				exit(0);						
			}
		}
		else{
			printf("\nO espaço escolhido já está ocupado, repita a operação para um espaço válido\n");
			contador--;
		}
	}
	
	printf("\nNinguém ganhou :(");
	exit(0);
}