#include<stdio.h>
#include<strings.h>

int main(){
	char strings[10][100],intstring[10];
	int inteiros[10],l;
	
	for(l=0;l<10;l++){
		printf("Insira a %d string:\n",l+1);
		scanf("%99[^\n]",strings[l]);
		setbuf(stdin,NULL);
		printf("Insira o %d inteiro:\n",l+1);
		scanf("%d",&inteiros[l]);
		setbuf(stdin,NULL);
	}
	for(l=0;l<10;l++){
		sprintf(intstring,"%d",inteiros[l]);
		if(strlen(strings[l])+strlen(intstring)<=99){
			strcat(strings[l],intstring);
		}
		else{
			printf("A string '%s' nao pode ser concatenada!\n",strings[l]);
		}
	}
	for(l=0;l<10;l++){
		printf("%s\n",strings[l]);
	}
}
