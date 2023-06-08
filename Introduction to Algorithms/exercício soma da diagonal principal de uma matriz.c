#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	int m[6][6],i,j,soma=0;
	
	setlocale(LC_CTYPE, "Portuguese_Brazil");
	
	/* Pedimos que usuário insira valores para todos os espaços da matriz m (6,6), tendo ao final todos 36 espaços
	 compostos por valores inseridos pelo usuário. */
	printf("Insira os valores para a matriz (6,6):\n");
	for(i=0;i<6;i++){
		for(j=0;j<6;j++){
			scanf("%d",&m[i][j]);
		}
	}
	/* Aqui calculamos a soma de todos os valores presentes na diagonal principal. */
	for(i=0;i<6;i++){
		for(j=0;j<6;j++){
			if(i==j){
				soma+=m[i][j];
			}
		}
	}
	/* Demonstramos na tela o resultado da soma de todos valores presentes na diagonal principal. */
	printf("A soma da diagonal principal da matriz (6,6) é:%d\n",soma);
	system("PAUSE");
	return;
}
