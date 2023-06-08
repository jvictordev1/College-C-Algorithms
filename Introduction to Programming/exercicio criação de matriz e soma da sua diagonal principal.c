#include<stdio.h>
#define lin 5
#define col 5

int main(){
	int matriz[lin][col],l,c,soma;
	
	for(l=0;l<lin;l++){
		for(c=0;c<col;c++){
			do{
				printf("insira um numero natural para a matriz[%d][%d]\n",l+1,c+1);
				scanf("%d",&matriz[l][c]);
			}while(matriz[l][c]<0);
		}
	}
	printf("\t\tMATRIZ\n");
	for(soma=0,l=0;l<lin;l++){
		printf("\n|");
		for(c=0;c<col;c++){
			printf("%5d",matriz[l][c]);
			if(l==c){
				soma+=matriz[l+1][c];
			}
		}
		printf("	|\n");
	}
	printf("\nA soma dos elementos da diagonal principal desta matriz sera: %d\n",soma);
}
