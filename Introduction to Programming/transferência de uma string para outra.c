#include<stdio.h>

int main(){
	char string1[21],string2[21];
	int i;
	
	printf("Insira a string\n");	
	scanf("%s",string1);
	
	for(i=0;i<21;i++){
		string2[i]=string1[i];
		if(!string1[i]){
			break;
		}
	}
	printf(string2);
}
