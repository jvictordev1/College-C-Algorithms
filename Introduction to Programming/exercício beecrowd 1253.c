#include<stdio.h>
#include<string.h>
#define tam 50

char decodifica(char palavra[tam],int desloca);
int main(){
	int i,j,casos,deslocaDir,*pd;
	char string[tam];
	
	scanf("%d",&casos);
	
	for(i=0,pd=&deslocaDir;i<casos;i++){
		scanf("%50s",string);
		setbuf(stdin,NULL);

		scanf("%d",pd);
		
		decodifica(string,*pd);
		
		puts(string);
	}
}
char decodifica(char palavra[tam],int desloca){
	int j,*dsl;
	const int alfa=26;
	
	dsl=&desloca;
	for(j=0;j<strlen(palavra);j++){
		if((palavra[j]-*dsl)<'A'){
			palavra[j]=(palavra[j]-*dsl)+alfa;
		}
		else{
			palavra[j]-=*dsl;
		}
	}
}
