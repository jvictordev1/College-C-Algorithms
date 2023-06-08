#include<stdio.h>
#include<string.h>
#define quant 5
#define tam 100

int main(){
	char vetor[quant][tam],comp[tam];
	int j,aux;
	
	for(j=0;j<quant;j++){
		printf("Insira a %d string:\n",j+1);
		scanf("%99[^\n]",vetor[j]);
		setbuf(stdin,NULL);
	}
	
	printf("Insira a string que deseja consultar se esta no vetor de strings:\n");
	scanf("%99[^\n]",comp);
	for(aux=1,j=0;j<quant;j++){
		if(!strcmp(vetor[j],comp)){
			aux=strcmp(vetor[j],comp);
			break;
		}
	}
	
	if(!aux){
		printf("A string '%s' esta presente no vetor de strings! Sua posicao no vetor eh strings[%d]\n",comp,j+1);
	}
	else{
		printf("A string '%s' nao esta presente no vetor de strings!\n",comp);
	}
}
