#include<stdio.h>
#define l 5
#define c 5

int main(){
	int mat[l][c],i,j,aux;
	
	for(i=0;i<l;i++){
		for(j=0;j<c;j++){
			do{
				printf("Entre com um valor para a matriz[%d][%d]\n",i+1,j+1);
				scanf("%f",&mat[i][j]);
			}while(mat[i][j]<0);
		}
	}
	for(aux=0,i=0;i<l;i++){
		for(j=0;j<c;j++){
			if(i>j){
				aux+=mat[i][j];
			}
		}
	}
	printf("soma = %d",aux);
}
