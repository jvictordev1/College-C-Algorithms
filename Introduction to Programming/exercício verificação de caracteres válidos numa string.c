#include<stdio.h>
#define max 100

int main(){
	int qntd,i,j;
	char string[max];
	
	printf("Insira a quantidade de strings que serao inseridas:\n");
	scanf("%d",&qntd);
	setbuf(stdin,NULL);
	
	for(j=0;qntd>0;j++,qntd--){
		printf("Insira a %d string:\n",j+1);
		scanf("%99[^\n]",string);
		setbuf(stdin,NULL);
		for(i=0;string[i];i++);
		printf("\nA quantidade de caracteres validos na string %d eh %d\n\n",j+1,i);
	}
}
