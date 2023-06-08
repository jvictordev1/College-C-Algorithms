#include<stdio.h>
#include<string.h>

int main(){
	char letras[16];
	unsigned long long int fat,i;
	do{
		scanf("%15s",letras);
		if(letras[0]!='0'){
			for(i=0,fat=1;i<strlen(letras);i++){
				fat*=strlen(letras)-i;
			}
			printf("%lld\n",fat);
		}
	}while(letras[0]!='0');
}
