#include<stdio.h>
#define lin 7
#define col 4

int main(){
	float matriz[lin][col];
	int l,c;
	
	for(l=0;l<lin;l++){
		for(c=0;c<col;c++){
			printf("insira um numero para a matriz[%d][%d]\n",l+1,c+1);
			scanf("%f",&matriz[l][c]);
		}
	}
	printf("\t\t      MATRIZ\n");
	for(l=0;l<lin;l++){
		printf("\n|");
		for(c=0;c<col;c++){
			printf("%10.2f",matriz[l][c]);
		}
		printf("	|\n");
	}
}
