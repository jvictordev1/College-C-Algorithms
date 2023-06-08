#include<stdio.h>
#define l 7
#define c 4

int main(){
	float mat[l][c];
	int i,j;
	
	for(i=0;i<l;i++){
		for(j=0;j<c;j++){
			printf("Entre com um valor para a matriz[%d][%d]\n",i+1,j+1);
			scanf("%f",&mat[i][j]);
		}
	}
	for(i=0;i<l;i++){
			printf("\n|");
			for(j=0;j<c;j++){
				printf("%.2f|",mat[i][j]);
		}
	}
}

