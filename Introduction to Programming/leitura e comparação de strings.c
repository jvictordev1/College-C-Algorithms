#include<stdio.h>
#include<string.h>

int main(){
	char str1[100],str2[100];
	
	printf("Insira a primeira string:\n");
	scanf("%99[^\n]",str1);
	setbuf(stdin,NULL);
	printf("Insira a segunda string:\n");
	scanf("%99[^\n]",str2);
	if(strlen(str1)==strlen(str2)){
		if(!strcmp(str1,str2)){
			printf("As strings sao iguais\n");
		}
		else{
			if(strlen(str1)+strlen(str2)<=99){
				strcat(str1,str2);
				printf("%s",str1);
			}
			else{
				printf("As strings concatenadas nao podem ser armazenadas na variavel declarada\n");
			}
		}
	}
}
