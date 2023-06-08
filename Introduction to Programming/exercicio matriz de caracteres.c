#include<stdio.h>

int main(){
	char matriz[10][100],*pont;
	int i;
	
	for(i=0,pont=matriz[0];i<10;i++){
		printf("Insira a %d string do vetor:\n",i+1);
		scanf("%99[^\n]",pont);
		setbuf(stdin,NULL);
		pont+=100;
	}
	printf("Strings digitadas:\n");
	for(i=0,pont=matriz[0];i<10;i++){
		printf("%s\n",pont);
		pont+=100;
	}
}
