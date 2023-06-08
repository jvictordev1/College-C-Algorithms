#include<stdio.h>
#include<string.h>

int main(){
	char string1[100],string2[100];
	int i,j,c;
	
	printf("Insira uma string:\n");
	scanf("%99[^\n]",string1);
	printf("Insira outra string:\n");
	setbuf(stdin,NULL);
	scanf("%99[^\n]",string2);
	
	if(strlen(string2)<=strlen(string1)){
		if(!strcmp(string1,string2)){
			printf("Strings iguais!\n");
		}
		else{
			for(i=strlen(string1),j=strlen(string2);j;j--,i--){
				if(string1[i-1]==string2[j-1]){
					c++;
				}
				else{
					break;
				}
			}
			if(c==strlen(string2)){
				printf("A segunda string esta contida no final da primeira!\n");
			}
			else{
				printf("A segunda string nao esta contida no final da primeira!\n");
			}
		}
	}
	else{
		printf("A segunda string nao esta contida no final da primeira!\n");
	}
}
