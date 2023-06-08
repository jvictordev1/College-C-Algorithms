#include<stdio.h>

int main(){
	int quant,c,i;
	char string[100];
	
	printf("Insira a quantidade de string que serao inseridas:\n");
	scanf("%d",&quant);
	for(c=0;c<quant;c++){
		printf("Insira a %d string:\n",c+1);
		scanf("%s",string);
		for(i=0;i<100;i++){
			if(!string[i]){
				break;
			}
		}
		printf("A string \"%s\" possui %d caracteres\n",string,i);
	}
}
