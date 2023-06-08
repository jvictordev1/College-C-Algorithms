#include<stdio.h>
#include<string.h>

int main(){
	char string1[100],string2[100];
	
	printf("Insira uma string:\n");
	scanf("%99[^\n]",string1);
	printf("Insira outra string:\n");
	setbuf(stdin,NULL);
	scanf("%99[^\n]",string2);
	
	if(strlen(string1)==strlen(string2)){
		if(strcmp(string1,string2)){
			if(strlen(string1)+strlen(string2)<=99){
				strcat(string1,string2);
				puts(string1);
			}
			else{
				printf("Estas strings nao podem ser concatenadas!\n");
			}
		}
		else{
			printf("strings iguais\n");
		}
	}
}
